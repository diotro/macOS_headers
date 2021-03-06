//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSKSearchReference-Protocol.h>

@class NSArray, NSString, TSDDrawableInfo, TSKDocumentRoot;
@protocol TSDCanvasSelection, TSKAnnotation;

@interface TSDCanvasSearchReference : NSObject <TSKSearchReference>
{
    id <TSDCanvasSelection> mCanvasSelection;
    TSDDrawableInfo *mDrawableInfo;
    TSKDocumentRoot *mDocumentRoot;
    BOOL mAutohideHighlight;
    BOOL mPulseHighlight;
    NSArray *mFindHighlights;
    id <TSKAnnotation> mAnnotation;
    struct CGPoint mSearchReferencePoint;
}

+ (id)searchReferenceWithDrawableInfo:(id)arg1;
@property(retain, nonatomic) id <TSKAnnotation> annotation; // @synthesize annotation=mAnnotation;
@property(nonatomic) struct CGPoint searchReferencePoint; // @synthesize searchReferencePoint=mSearchReferencePoint;
@property(nonatomic) BOOL pulseHighlight; // @synthesize pulseHighlight=mPulseHighlight;
@property(nonatomic) BOOL autohideHighlight; // @synthesize autohideHighlight=mAutohideHighlight;
@property(retain, nonatomic) NSArray *findHighlights; // @synthesize findHighlights=mFindHighlights;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)searchReferenceEnd;
- (id)searchReferenceStart;
- (id)searchReferenceForReplacingWithString:(id)arg1 options:(unsigned long long)arg2 authorCreatedWithCommand:(id *)arg3;
- (BOOL)isReplaceable;
- (id)selection;
- (id)model;
- (id)drawableInfo;
- (id)commandForReplacingWithString:(id)arg1 options:(unsigned long long)arg2;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithDrawableInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

