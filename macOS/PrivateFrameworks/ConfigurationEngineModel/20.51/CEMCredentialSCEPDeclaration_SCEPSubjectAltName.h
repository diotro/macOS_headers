//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMCredentialSCEPDeclaration_SCEPSubjectAltName : CEMPayloadBase
{
    NSString *_payloadRfc822Name;
    NSString *_payloadDNSName;
    NSString *_payloadUniformResourceIdentifier;
    NSString *_payloadNtPrincipalName;
}

+ (id)buildRequiredOnly;
+ (id)buildWithRfc822Name:(id)arg1 withDNSName:(id)arg2 withUniformResourceIdentifier:(id)arg3 withNtPrincipalName:(id)arg4;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) NSString *payloadNtPrincipalName; // @synthesize payloadNtPrincipalName=_payloadNtPrincipalName;
@property(copy, nonatomic) NSString *payloadUniformResourceIdentifier; // @synthesize payloadUniformResourceIdentifier=_payloadUniformResourceIdentifier;
@property(copy, nonatomic) NSString *payloadDNSName; // @synthesize payloadDNSName=_payloadDNSName;
@property(copy, nonatomic) NSString *payloadRfc822Name; // @synthesize payloadRfc822Name=_payloadRfc822Name;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;

@end

