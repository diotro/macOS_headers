//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSTimer;

@interface BPTimedDispatch : NSObject
{
    CDUnknownBlockType _schedulledBlock;
    NSTimer *_dispatchTimer;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property(retain) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain) NSTimer *dispatchTimer; // @synthesize dispatchTimer=_dispatchTimer;
@property(copy, nonatomic) CDUnknownBlockType schedulledBlock; // @synthesize schedulledBlock=_schedulledBlock;
- (void).cxx_destruct;
- (void)dispatchBlockTimerDidFire:(id)arg1;
- (void)scheduleDispatchAfterTimeInterval:(double)arg1 inQueue:(id)arg2 ofBlock:(CDUnknownBlockType)arg3;
- (void)scheduleDispatchAfterTimeInterval:(double)arg1 ofBlock:(CDUnknownBlockType)arg2;

@end

