//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsTransport/NTPBPersonalizationLocalData.h>

@class CKRecord, NSDictionary;

@interface NTPBPersonalizationLocalData (FCAdditions)
+ (id)readValueFromKeyValuePair:(id)arg1;
+ (int)keyValuePairType;
@property(retain, nonatomic) CKRecord *remoteRecord;
@property(readonly, nonatomic) NSDictionary *openChangeGroupDeltasByFeatureKey;
- (void)writeToKeyValuePair:(id)arg1;
@end

