#ifndef PAYPALAPISERVEROBJECT_HPP
#define PAYPALAPISERVEROBJECT_HPP

#include "PayPalSvc.hpp"

class PayPalAPIServerObject : public PayPalAPISoapBindingServerBase
{
public:
    PayPalAPIServerObject();
    ~PayPalAPIServerObject();

public: // PayPalAPI implementation
    virtual NS__RefundTransactionResponseType refundTransaction( const NS__RefundTransactionReq& refundTransactionRequest ) override;

    virtual NS__InitiateRecoupResponseType initiateRecoup( const NS__InitiateRecoupReq& initiateRecoupRequest ) override;

    virtual NS__CompleteRecoupResponseType completeRecoup( const NS__CompleteRecoupReq& completeRecoupRequest ) override;

    virtual NS__CancelRecoupResponseType cancelRecoup( const NS__CancelRecoupReq& cancelRecoupRequest ) override;

    virtual NS__GetTransactionDetailsResponseType getTransactionDetails( const NS__GetTransactionDetailsReq& getTransactionDetailsRequest ) override;

    virtual NS__BMCreateButtonResponseType bMCreateButton( const NS__BMCreateButtonReq& bMCreateButtonRequest ) override;

    virtual NS__BMUpdateButtonResponseType bMUpdateButton( const NS__BMUpdateButtonReq& bMUpdateButtonRequest ) override;

    virtual NS__BMManageButtonStatusResponseType bMManageButtonStatus( const NS__BMManageButtonStatusReq& bMManageButtonStatusRequest ) override;

    virtual NS__BMGetButtonDetailsResponseType bMGetButtonDetails( const NS__BMGetButtonDetailsReq& bMGetButtonDetailsRequest ) override;

    virtual NS__BMSetInventoryResponseType bMSetInventory( const NS__BMSetInventoryReq& bMSetInventoryRequest ) override;

    virtual NS__BMGetInventoryResponseType bMGetInventory( const NS__BMGetInventoryReq& bMGetInventoryRequest ) override;

    virtual NS__BMButtonSearchResponseType bMButtonSearch( const NS__BMButtonSearchReq& bMButtonSearchRequest ) override;

    virtual NS__BillUserResponseType billUser( const NS__BillUserReq& billUserRequest ) override;

    virtual NS__TransactionSearchResponseType transactionSearch( const NS__TransactionSearchReq& transactionSearchRequest ) override;

    virtual NS__MassPayResponseType massPay( const NS__MassPayReq& massPayRequest ) override;

    virtual NS__BAUpdateResponseType billAgreementUpdate( const NS__BillAgreementUpdateReq& billAgreementUpdateRequest ) override;

    virtual NS__AddressVerifyResponseType addressVerify( const NS__AddressVerifyReq& addressVerifyRequest ) override;

    virtual NS__EnterBoardingResponseType enterBoarding( const NS__EnterBoardingReq& enterBoardingRequest ) override;

    virtual NS__GetBoardingDetailsResponseType getBoardingDetails( const NS__GetBoardingDetailsReq& getBoardingDetailsRequest ) override;

    virtual NS__CreateMobilePaymentResponseType createMobilePayment( const NS__CreateMobilePaymentReq& createMobilePaymentRequest ) override;

    virtual NS__GetMobileStatusResponseType getMobileStatus( const NS__GetMobileStatusReq& getMobileStatusRequest ) override;

    virtual NS__SetMobileCheckoutResponseType setMobileCheckout( const NS__SetMobileCheckoutReq& setMobileCheckoutRequest ) override;

    virtual NS__DoMobileCheckoutPaymentResponseType doMobileCheckoutPayment( const NS__DoMobileCheckoutPaymentReq& doMobileCheckoutPaymentRequest ) override;

    virtual NS__GetBalanceResponseType getBalance( const NS__GetBalanceReq& getBalanceRequest ) override;

    virtual NS__GetPalDetailsResponseType getPalDetails( const NS__GetPalDetailsReq& getPalDetailsRequest ) override;

public: // Base reimplementation
    void processRequest( const KDSoapMessage &_request, KDSoapMessage &_response, const QByteArray& _soapAction ) override;
};

#endif // PAYPALAPISERVEROBJECT_HPP
