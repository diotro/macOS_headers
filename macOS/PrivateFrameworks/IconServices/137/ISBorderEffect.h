//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ISEffect.h"

@class ISColor, NSString;

__attribute__((visibility("hidden")))
@interface ISBorderEffect : NSObject <ISEffect>
{
    ISColor *_color;
    double _lineWidth;
}

@property double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain) ISColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (id)filterWithBackgroundImage:(id)arg1 inputImage:(id)arg2;
- (id)initWithLineWidth:(double)arg1 color:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

