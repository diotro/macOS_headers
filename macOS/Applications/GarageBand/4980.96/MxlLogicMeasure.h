//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MxlBarline, MxlStaffAttributes, NSMutableArray;

@interface MxlLogicMeasure : NSObject
{
    struct MxlXPos measureStartXPos3;
    struct MxlXPos measureStopXPos3;
    long long measureStartXl_scUnits;
    MxlBarline *leftBarline_2;
    MxlBarline *rightBarline_2;
    struct MxlMeasureID measureID_2;
    MxlStaffAttributes *attrsAtBegin_2;
    NSMutableArray *mxlElems_2;
}

@property long long measureStartXl_scUnits; // @synthesize measureStartXl_scUnits;
@property(retain) MxlBarline *rightBarline_2; // @synthesize rightBarline_2;
@property(retain) MxlBarline *leftBarline_2; // @synthesize leftBarline_2;
- (id)description;
- (void)dbgPrintLogicMeasure:(id)arg1;
- (void)xmlDebugLogicMeasure:(id)arg1 elemIndex:(long long)arg2 viewState:(struct ScViewState *)arg3;
- (struct MxlXPos)measureStopXPos3;
- (struct MxlXPos)measureStartXPos3;
- (void)setLogicMeasureStopXPos:(struct MxlXPos)arg1;
- (void)setLogicMeasureStartXPos:(struct MxlXPos)arg1;
- (long long)start_line_x;
- (long long)start_abs_x;
- (void)setVisibleIndex:(long long)arg1 visibleNumber:(long long)arg2;
- (void)dealloc;
- (id)init;

@end

