//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Catalyst/CATOperation.h>

@class NSDate, NSDictionary, NSString;
@protocol CRKIDSListener, CRKIDSLocalPrimitives;

@interface CRKIDSSendMessageOperation : CATOperation
{
    id <CRKIDSLocalPrimitives> _IDSLocalPrimitives;
    NSDictionary *_message;
    NSString *_destinationAddress;
    id <CRKIDSListener> _messageSendListener;
    NSString *_messageSendIdentifier;
    NSDate *_initialSendDate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *initialSendDate; // @synthesize initialSendDate=_initialSendDate;
@property(copy, nonatomic) NSString *messageSendIdentifier; // @synthesize messageSendIdentifier=_messageSendIdentifier;
@property(retain, nonatomic) id <CRKIDSListener> messageSendListener; // @synthesize messageSendListener=_messageSendListener;
@property(readonly, copy, nonatomic) NSString *destinationAddress; // @synthesize destinationAddress=_destinationAddress;
@property(readonly, copy, nonatomic) NSDictionary *message; // @synthesize message=_message;
@property(readonly, nonatomic) id <CRKIDSLocalPrimitives> IDSLocalPrimitives; // @synthesize IDSLocalPrimitives=_IDSLocalPrimitives;
- (void)didSendMessageWithIdentifier:(id)arg1 sendSuccess:(BOOL)arg2 error:(id)arg3;
- (void)main;
- (void)cancel;
- (BOOL)isAsynchronous;
- (id)initWithIDSLocalPrimitives:(id)arg1 message:(id)arg2 destinationAddress:(id)arg3;

@end

