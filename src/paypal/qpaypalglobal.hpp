#ifndef QPAYPALGLOBAL_HPP
#define QPAYPALGLOBAL_HPP

#include <QtCore/QtGlobal>

#include "qpaypalconfig.hpp"

/*
   QT_PAYPAL_VERSION is (major << 16) + (minor << 8) + patch.
*/
#define QT_PAYPAL_VERSION QT_PAYPAL_VERSION_CHECK(QT_PAYPAL_VERSION_MAJOR, QT_PAYPAL_VERSION_MINOR, QT_PAYPAL_VERSION_PATCH)
/*
   can be used like #if (QT_PAYPAL_VERSION >= QT_PAYPAL_VERSION_CHECK(1, 1, 0))
*/
#define QT_PAYPAL_VERSION_CHECK(major, minor, patch) ((major<<16)|(minor<<8)|(patch))

#ifndef QT_STATIC
#  if defined(QT_BUILD_PAYPAL_LIB)
#    define QT_PAYPAL_EXPORT Q_DECL_EXPORT
#  else
#    define QT_PAYPAL_EXPORT Q_DECL_IMPORT
#  endif
#else
#  define QT_PAYPAL_EXPORT
#endif

#define QT_PAYPAL_AUTOTEST_EXPORT Q_AUTOTEST_EXPORT

#define QT_PAYPAL_NAMESPACE QtPayPal

#ifdef QT_PAYPAL_NAMESPACE
#  define QT_PAYPAL_BEGIN_NAMESPACE namespace QT_PAYPAL_NAMESPACE {
#  define QT_PAYPAL_END_NAMESPACE }
#  define QT_PAYPAL_USE_NAMESPACE using namespace QT_PAYPAL_NAMESPACE;
#else
#  define QT_PAYPAL_BEGIN_NAMESPACE
#  define QT_PAYPAL_END_NAMESPACE
#  define QT_PAYPAL_USE_NAMESPACE
#endif

// Make sure we have used the namespace at least once to avoid compile errors when including
// the QtPayPal umbrella header.
QT_PAYPAL_BEGIN_NAMESPACE
QT_PAYPAL_END_NAMESPACE

/*
    On Windows min and max conflict with standard macros
*/
#ifdef Q_OS_WIN
#ifndef NOMINMAX
#define NOMINMAX
#endif
#endif

#endif // QPAYPALGLOBAL_HPP
