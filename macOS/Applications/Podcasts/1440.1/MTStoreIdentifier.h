//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface MTStoreIdentifier : NSObject
{
    NSNumber *_storeIdentifier;
    NSString *_feedUrl;
}

+ (BOOL)isNotEmptyNumber:(id)arg1;
+ (BOOL)isNotEmpty:(long long)arg1;
+ (BOOL)isEmptyNumber:(id)arg1;
+ (BOOL)isEmpty:(long long)arg1;
+ (id)serpentIdNumberFromStoreId:(long long)arg1;
+ (long long)serpentIdFromAdamId:(long long)arg1;
+ (id)serpentIdNumberFromAdamIdNumber:(id)arg1;
+ (id)serpentIdListFromAdamIDList:(id)arg1;
+ (id)adamIdNumberFromStoreId:(long long)arg1;
+ (long long)adamIDFromSerpentId:(long long)arg1;
+ (id)adamIdNumberFromSerpentIdNumber:(id)arg1;
+ (id)adamIDListFromSerpentIdList:(id)arg1;
+ (id)episodePredicateForIdentifier:(id)arg1;
+ (id)podcastPredicateForIdentifer:(id)arg1;
+ (id)identifierWithFeedUrl:(id)arg1 storeIdentifier:(id)arg2;
+ (id)identifierWithFeedUrl:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *feedUrl; // @synthesize feedUrl=_feedUrl;
@property(retain, nonatomic) NSNumber *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
- (id)initWithFeedUrl:(id)arg1 storeIdentifier:(id)arg2;
- (id)initWithFeedUrl:(id)arg1;

@end

