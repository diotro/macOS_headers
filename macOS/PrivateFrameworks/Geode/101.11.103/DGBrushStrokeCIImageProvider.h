//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DGBrushStroke;

@interface DGBrushStrokeCIImageProvider : NSObject
{
    DGBrushStroke *_stroke;
    BOOL _closed;
    int _pressureMode;
    struct PFIntRect_st _extent;
}

- (void)provideImageData:(void *)arg1 bytesPerRow:(unsigned long long)arg2 origin:(unsigned long long)arg3:(unsigned long long)arg4 size:(unsigned long long)arg5:(unsigned long long)arg6 userInfo:(id)arg7;
- (void)dealloc;
- (id)initWithStroke:(id)arg1 closed:(BOOL)arg2 pressureMode:(int)arg3;

@end

