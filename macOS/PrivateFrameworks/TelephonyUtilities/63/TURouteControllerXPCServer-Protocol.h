//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol TURouteControllerXPCServer <NSObject>
- (oneway void)pickPairedHostDeviceRouteWithUniqueIdentifier:(NSString *)arg1;
- (oneway void)pickLocalRouteWithUniqueIdentifier:(NSString *)arg1;
- (oneway void)pairedHostDeviceRoutesByUniqueIdentifier:(void (^)(NSDictionary *))arg1;
- (oneway void)localRoutesByUniqueIdentifier:(void (^)(NSDictionary *))arg1;
@end

