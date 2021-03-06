//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKServerError.h"

#import "GSSPAutoEncodable-Protocol.h"

@class NSArray, NSString;

@interface TSKDocumentServerError : TSKServerError <GSSPAutoEncodable>
{
    int _dcpErrorCode;
    NSString *_errorArgs;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *errorArgs;
@property(readonly, nonatomic) unsigned long long dcpErrorCode;
- (id)initWithMessage:(id)arg1 token:(id)arg2 trace:(id)arg3 cause:(id)arg4 dcpErrorCode:(int)arg5 errorArgs:(id)arg6;
- (void)populateGSSPDocumentServerError:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

