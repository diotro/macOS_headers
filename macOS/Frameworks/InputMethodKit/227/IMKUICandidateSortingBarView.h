//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class IMKUICandidateLayoutTraits, NSArray, NSButton, NSMutableArray, NSMutableDictionary;

@interface IMKUICandidateSortingBarView : NSView
{
    long long _alignment;
    id <IMKUICandidateSortingBarDelegate> _delegate;
    IMKUICandidateLayoutTraits *_layoutTraits;
    BOOL _needsToCalculateLayout;
    NSButton *_radarButton;
    unsigned long long _selectedIndex;
    NSArray *_sortingModes;
    NSMutableArray *_titles;
    NSMutableDictionary *_titleToButtonMapping;
    double _totalButtonWidth;
    BOOL _radarButtonVisible;
}

@property(nonatomic) BOOL radarButtonVisible; // @synthesize radarButtonVisible=_radarButtonVisible;
@property(retain, nonatomic) IMKUICandidateLayoutTraits *layoutTraits; // @synthesize layoutTraits=_layoutTraits;
@property(nonatomic) double totalButtonWidth; // @synthesize totalButtonWidth=_totalButtonWidth;
@property(retain, nonatomic) NSMutableArray *titles; // @synthesize titles=_titles;
@property(retain, nonatomic) NSMutableDictionary *titleToButtonMapping; // @synthesize titleToButtonMapping=_titleToButtonMapping;
@property(retain, nonatomic) NSArray *sortingModes; // @synthesize sortingModes=_sortingModes;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSButton *radarButton; // @synthesize radarButton=_radarButton;
@property(nonatomic) BOOL needsToCalculateLayout; // @synthesize needsToCalculateLayout=_needsToCalculateLayout;
@property __weak id <IMKUICandidateSortingBarDelegate> delegate; // @synthesize delegate=_delegate;
@property long long alignment; // @synthesize alignment=_alignment;
- (void).cxx_destruct;
- (void)radarButtonPressed:(id)arg1;
- (id)makeRadarButton;
- (void)drawRect:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)didHoverOverButton:(id)arg1;
- (void)didSelectButton:(id)arg1;
- (void)calculateLayout;
- (BOOL)radarButtonSizeConstant;
- (void)removeAllSortingMethods;
- (void)removeSortingMethodWithTitle:(id)arg1;
- (void)addSortingMethodWithTitle:(id)arg1;
- (struct CGSize)intrinsicContentSize;
@property(readonly) NSArray *titleStrings;
- (id)initWithFrame:(struct CGRect)arg1;

@end

