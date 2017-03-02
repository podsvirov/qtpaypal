#include "PayPalAPIServerObject.hpp"

#include <QDebug>

PayPalAPIServerObject::PayPalAPIServerObject()
{

}

PayPalAPIServerObject::~PayPalAPIServerObject()
{

}

NS__RefundTransactionResponseType PayPalAPIServerObject::refundTransaction(const NS__RefundTransactionReq &refundTransactionRequest)
{
    NS__RefundTransactionResponseType response;
    return response;
}

NS__InitiateRecoupResponseType PayPalAPIServerObject::initiateRecoup(const NS__InitiateRecoupReq &initiateRecoupRequest)
{
    NS__InitiateRecoupResponseType response;
    return response;
}

NS__CompleteRecoupResponseType PayPalAPIServerObject::completeRecoup(const NS__CompleteRecoupReq &completeRecoupRequest)
{
    NS__CompleteRecoupResponseType response;
    return response;
}

NS__CancelRecoupResponseType PayPalAPIServerObject::cancelRecoup(const NS__CancelRecoupReq &cancelRecoupRequest)
{
    NS__CancelRecoupResponseType response;
    return response;
}

NS__GetTransactionDetailsResponseType PayPalAPIServerObject::getTransactionDetails(const NS__GetTransactionDetailsReq &getTransactionDetailsRequest)
{
    NS__GetTransactionDetailsResponseType response;
    return response;
}

NS__BMCreateButtonResponseType PayPalAPIServerObject::bMCreateButton(const NS__BMCreateButtonReq &bMCreateButtonRequest)
{
    NS__BMCreateButtonResponseType response;
    return response;
}

NS__BMUpdateButtonResponseType PayPalAPIServerObject::bMUpdateButton(const NS__BMUpdateButtonReq &bMUpdateButtonRequest)
{
    NS__BMUpdateButtonResponseType response;
    return response;
}

NS__BMManageButtonStatusResponseType PayPalAPIServerObject::bMManageButtonStatus(const NS__BMManageButtonStatusReq &bMManageButtonStatusRequest)
{
    NS__BMManageButtonStatusResponseType response;
    return response;
}

NS__BMGetButtonDetailsResponseType PayPalAPIServerObject::bMGetButtonDetails(const NS__BMGetButtonDetailsReq &bMGetButtonDetailsRequest)
{
    NS__BMGetButtonDetailsResponseType response;
    return response;
}

NS__BMSetInventoryResponseType PayPalAPIServerObject::bMSetInventory(const NS__BMSetInventoryReq &bMSetInventoryRequest)
{
    NS__BMSetInventoryResponseType response;
    return response;
}

NS__BMGetInventoryResponseType PayPalAPIServerObject::bMGetInventory(const NS__BMGetInventoryReq &bMGetInventoryRequest)
{
    NS__BMGetInventoryResponseType response;
    return response;
}

NS__BMButtonSearchResponseType PayPalAPIServerObject::bMButtonSearch(const NS__BMButtonSearchReq &bMButtonSearchRequest)
{
    NS__BMButtonSearchResponseType response;
    return response;
}

NS__BillUserResponseType PayPalAPIServerObject::billUser(const NS__BillUserReq &billUserRequest)
{
    NS__BillUserResponseType response;
    return response;
}

NS__TransactionSearchResponseType PayPalAPIServerObject::transactionSearch(const NS__TransactionSearchReq &transactionSearchRequest)
{
    NS__TransactionSearchResponseType response;
    return response;
}

NS__MassPayResponseType PayPalAPIServerObject::massPay(const NS__MassPayReq &massPayRequest)
{
    NS__MassPayResponseType response;
    return response;
}

NS__BAUpdateResponseType PayPalAPIServerObject::billAgreementUpdate(const NS__BillAgreementUpdateReq &billAgreementUpdateRequest)
{
    NS__BAUpdateResponseType response;
    return response;
}

NS__AddressVerifyResponseType PayPalAPIServerObject::addressVerify(const NS__AddressVerifyReq &addressVerifyRequest)
{
    NS__AddressVerifyResponseType response;
    return response;
}

NS__EnterBoardingResponseType PayPalAPIServerObject::enterBoarding(const NS__EnterBoardingReq &enterBoardingRequest)
{
    NS__EnterBoardingResponseType response;
    return response;
}

NS__GetBoardingDetailsResponseType PayPalAPIServerObject::getBoardingDetails(const NS__GetBoardingDetailsReq &getBoardingDetailsRequest)
{
    NS__GetBoardingDetailsResponseType response;
    return response;
}

NS__CreateMobilePaymentResponseType PayPalAPIServerObject::createMobilePayment(const NS__CreateMobilePaymentReq &createMobilePaymentRequest)
{
    NS__CreateMobilePaymentResponseType response;
    return response;
}

NS__GetMobileStatusResponseType PayPalAPIServerObject::getMobileStatus(const NS__GetMobileStatusReq &getMobileStatusRequest)
{
    NS__GetMobileStatusResponseType response;
    return response;
}

NS__SetMobileCheckoutResponseType PayPalAPIServerObject::setMobileCheckout(const NS__SetMobileCheckoutReq &setMobileCheckoutRequest)
{
    NS__SetMobileCheckoutResponseType response;
    return response;
}

NS__DoMobileCheckoutPaymentResponseType PayPalAPIServerObject::doMobileCheckoutPayment(const NS__DoMobileCheckoutPaymentReq &doMobileCheckoutPaymentRequest)
{
    NS__DoMobileCheckoutPaymentResponseType response;
    return response;
}

NS__GetBalanceResponseType PayPalAPIServerObject::getBalance(const NS__GetBalanceReq &getBalanceRequest)
{
    qDebug() << "GetBalance:" << getBalanceRequest.getBalanceRequest().returnAllCurrencies();

    NS__GetBalanceResponseType response;
    return response;
}

NS__GetPalDetailsResponseType PayPalAPIServerObject::getPalDetails(const NS__GetPalDetailsReq &getPalDetailsRequest)
{
    NS__GetPalDetailsResponseType response;
    return response;
}

void PayPalAPIServerObject::processRequest(const KDSoapMessage &_request, KDSoapMessage &_response, const QByteArray &_soapAction)
{
    // Check Login headers
    KDSoapHeaders headers = requestHeaders();
    QString username = headers.header("Username").value().toString();
    QString password = headers.header("Password").value().toString();
    if (username.isEmpty() && password.isEmpty())
    {
        setFault("Client.Login", "Empty headers",
                 "Server.Login", tr("You must set Username and Password headers."));
    }
    else
    {
        PayPalAPISoapBindingServerBase::processRequest(_request, _response, _soapAction);
    }
}
