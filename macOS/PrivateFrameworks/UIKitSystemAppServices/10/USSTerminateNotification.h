//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitSystemAppServices/USSNotification.h>

@class NSString;

@interface USSTerminateNotification : USSNotification
{
    NSString *_reason;
}

@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (void).cxx_destruct;
- (id)notificationName;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)initWithReason:(id)arg1;

@end

