//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIFoundation/NSObject-Protocol.h>

@class NSIndexPath, NSString;

@protocol _NSCollectionLayoutVisibleItem <NSObject>
@property(readonly, nonatomic) NSString *representedElementKind;
@property(readonly, nonatomic) long long representedElementCategory;
@property(readonly, nonatomic) struct CGRect bounds;
@property(readonly, nonatomic) struct CGRect frame;
@property(readonly, nonatomic) NSIndexPath *indexPath;
@property(readonly, nonatomic) NSString *name;
@property(nonatomic) struct CATransform3D transform3D;
@property(nonatomic) struct CGAffineTransform transform;
@property(nonatomic) struct CGPoint center;
@property(nonatomic, getter=isHidden) BOOL hidden;
@property(nonatomic) long long zIndex;
@property(nonatomic) double alpha;
@end

