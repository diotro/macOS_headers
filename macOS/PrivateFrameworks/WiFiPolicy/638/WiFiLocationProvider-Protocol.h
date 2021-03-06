//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WiFiContextProvider.h"

@class CLLocation;

@protocol WiFiLocationProvider <WiFiContextProvider>
@property(copy, nonatomic) CDUnknownBlockType locationChangedCallback;
@property(readonly, nonatomic) CLLocation *currentLocation;
@property(readonly, nonatomic) BOOL isAuthorized;
- (void)requestHighAccuracyLocation:(void (^)(CLLocation *, NSError *))arg1;
@end

