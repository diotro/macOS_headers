//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKServiceClient.h"

@class NSOperationQueue;

@interface TSKSharingServiceClient : TSKServiceClient
{
    NSOperationQueue *_responseQueue;
}

+ (id)sizeStringFromErrorUserInfoDictionary:(id)arg1;
+ (id)typeFromItem:(id)arg1;
+ (id)tokenFromItem:(id)arg1;
+ (BOOL)activeFromItem:(id)arg1;
+ (BOOL)readOnlyFromItem:(id)arg1;
+ (id)shareInfoFromItem:(id)arg1;
+ (id)pathFromItem:(id)arg1;
+ (id)nameFromItem:(id)arg1;
+ (id)tokenFromShareInfo:(id)arg1;
+ (BOOL)activeFromShareInfo:(id)arg1;
+ (BOOL)readOnlyFromShareInfo:(id)arg1;
+ (id)changeIdFromItem:(id)arg1;
+ (id)parentItemIdFromItem:(id)arg1;
+ (id)documentIdFromItem:(id)arg1;
+ (id)itemIdFromItem:(id)arg1;
+ (id)getChildItemNamed:(id)arg1 fromItemList:(id)arg2;
+ (BOOL)isErrorNotFoundError:(id)arg1;
- (id)errorForResponse:(id)arg1;
- (id)errorForBadJSONInResponse:(id)arg1;
- (id)responseQueue;
- (id)composeNextRequestWithURLPath:(id)arg1 method:(id)arg2 body:(id)arg3;
- (void)dealloc;
- (id)initWithResponseQueue:(id)arg1;

@end

