//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class NSArray, NSData, NSString, RemoteNotificationVerificationRequestProxy;

@protocol RemoteNotificationVerificationRequestProxyDelegate <NSObject>
- (void)verificationRequest:(RemoteNotificationVerificationRequestProxy *)arg1 didFinishHandshake:(int)arg2 websiteName:(NSString *)arg3 lowResIcon:(NSData *)arg4 highResIcon:(NSData *)arg5 errorMessages:(NSArray *)arg6;

@optional
- (void)verificationRequest:(RemoteNotificationVerificationRequestProxy *)arg1 centerDidRegisterForRemoteNotifications:(unsigned long long)arg2 withDeviceToken:(NSString *)arg3;
@end

