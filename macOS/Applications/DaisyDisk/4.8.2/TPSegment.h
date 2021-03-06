//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class Item, NSBezierPath, TPRing;

@interface TPSegment : NSObject
{
    Item *_item;
    CDStruct_e7d24821 _span;
    CDStruct_e7d24821 _displaySpan;
    TPRing *_ring;
    NSBezierPath *_path;
    double _alpha;
}

@property(readonly, nonatomic) CDStruct_e7d24821 displaySpan; // @synthesize displaySpan=_displaySpan;
@property(readonly, nonatomic) CDStruct_e7d24821 span; // @synthesize span=_span;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(readonly, nonatomic) TPRing *ring; // @synthesize ring=_ring;
@property(readonly, nonatomic) Item *item; // @synthesize item=_item;
@property(readonly, nonatomic) double lowerRadius;
- (double)upperRadiusForHitTest:(BOOL)arg1;
@property(readonly, nonatomic) BOOL isBlackHole;
@property(readonly, nonatomic) struct CGRect bounds;
- (struct CGPoint)calculateCenterPoint;
- (void)drawWithZoomSwellingLevel:(double)arg1 forceDrawBlackHole:(BOOL)arg2;
- (id)fillColor;
- (BOOL)hitTest:(struct CGPoint)arg1;
- (double)normalizePosition:(double)arg1;
- (void)calculateWithSpan:(CDStruct_e7d24821)arg1;
- (void)buildPath:(id)arg1 forZoomSwellingLevel:(double)arg2;
- (void)dealloc;
- (id)initWithItem:(id)arg1 ring:(id)arg2 span:(CDStruct_e7d24821)arg3;

@end

