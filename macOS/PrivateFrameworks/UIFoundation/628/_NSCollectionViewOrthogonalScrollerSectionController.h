//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSIndexSet, NSMapTable, _NSCollectionViewCore;

@interface _NSCollectionViewOrthogonalScrollerSectionController : NSObject
{
    _NSCollectionViewCore *_collectionView;
    NSMapTable *_scrollViewMap;
    NSMapTable *_scrollViewToSectionMap;
    NSHashTable *_frontMostElements;
    NSIndexSet *_currentOrthogonalSectionIndexes;
}

@property(retain, nonatomic) NSIndexSet *currentOrthogonalSectionIndexes; // @synthesize currentOrthogonalSectionIndexes=_currentOrthogonalSectionIndexes;
@property(retain, nonatomic) NSHashTable *frontMostElements; // @synthesize frontMostElements=_frontMostElements;
@property(retain, nonatomic) NSMapTable *scrollViewToSectionMap; // @synthesize scrollViewToSectionMap=_scrollViewToSectionMap;
@property(retain, nonatomic) NSMapTable *scrollViewMap; // @synthesize scrollViewMap=_scrollViewMap;
@property(nonatomic) __weak _NSCollectionViewCore *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)_forceElementsOnTopAsNeeded;
- (struct CGSize)_contentSizeForSection:(long long)arg1 layout:(id)arg2;
- (void)_configureScrollView:(id)arg1 forSection:(long long)arg2 baseContentInsets:(struct NSEdgeInsets)arg3;
- (void)removeEmptyScrollViews;
- (void)adjustElementHierarchyOrderingForOrthogonalElementIfNeeded:(id)arg1 layoutAttributes:(id)arg2;
- (void)contentViewDidScroll:(id)arg1;
- (void)_deleteSectionScrollView:(id)arg1 forSection:(long long)arg2;
- (id)_addSectionScrollViewForSection:(long long)arg1;
- (id)_addSectionScrollViewForIndexPath:(id)arg1;
- (id)_sectionScrollViewForSection:(long long)arg1;
- (id)_sectionScrollViewForIndexPath:(id)arg1;
- (void)insertDeleteOrthogonalSectionsOnLayoutInvalidation;
- (void)performLayout;
- (void)addElementIfNeeded:(id)arg1;
- (BOOL)isElementInOrthogonalScrollingSection:(id)arg1;
- (id)initWithCollectionView:(id)arg1;

@end

