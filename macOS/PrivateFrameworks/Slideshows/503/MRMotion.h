//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MRMotion : NSObject
{
    NSString *_key;
    double _startValue;
    double _value;
    double _startTime;
    double _duration;
    double _easeIn;
    double _easeOut;
}

@property(readonly) double easeOut; // @synthesize easeOut=_easeOut;
@property(readonly) double easeIn; // @synthesize easeIn=_easeIn;
@property(readonly) double duration; // @synthesize duration=_duration;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(readonly) double value; // @synthesize value=_value;
@property(nonatomic) double startValue; // @synthesize startValue=_startValue;
@property(readonly) NSString *key; // @synthesize key=_key;
- (double)valueAtTime:(double)arg1;
- (void)dealloc;
- (id)initWithKey:(id)arg1 value:(double)arg2 duration:(double)arg3 easeIn:(double)arg4 easeOut:(double)arg5;

@end

