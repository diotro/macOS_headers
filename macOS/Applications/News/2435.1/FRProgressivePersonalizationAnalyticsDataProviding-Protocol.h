//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString;
@protocol FRProgressivePersonalizationContext, TSLocationDetectionManagerType;

@protocol FRProgressivePersonalizationAnalyticsDataProviding
@property(retain, nonatomic) id <TSLocationDetectionManagerType> locationManager;
@property(readonly, nonatomic) id <FRProgressivePersonalizationContext> progressivePersonalizationContext;
- (unsigned long long)feedAutoSubscribeTypeForTagID:(NSString *)arg1;
- (unsigned long long)groupFormationReasonForTagID:(NSString *)arg1;
@end

