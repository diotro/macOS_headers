//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface DKDrawingStrokePoint : NSObject <NSCopying>
{
    double _force;
    double _velocity;
    struct CGPoint _location;
}

@property(nonatomic) double velocity; // @synthesize velocity=_velocity;
@property(nonatomic) double force; // @synthesize force=_force;
@property(nonatomic) struct CGPoint location; // @synthesize location=_location;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

