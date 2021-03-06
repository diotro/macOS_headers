//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TSKCommand.h"

#import "GSSPAutoEncodable.h"

@class KNCommandThemePrimitiveInsertMasterSlideNode, KNDocumentRoot, KNSlideNode, NSArray, NSUUID;

@interface KNCommandThemeInsertMasterSlideNode : TSKCommand <GSSPAutoEncodable>
{
    NSArray *_undoMasterChangeCommands;
    BOOL _setsInsertedSlideAsDefaultMasterSlide;
    NSUUID *_masterSlideNodeId;
    NSArray *_previousClassicThemeRecords;
    NSArray *_addedCustomFormatKeys;
    KNCommandThemePrimitiveInsertMasterSlideNode *_primitiveCommandToInduce;
    KNSlideNode *_replacementMasterSlideNodeForUndo;
}

@property(retain) NSUUID *masterSlideNodeId; // @synthesize masterSlideNodeId=_masterSlideNodeId;
- (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1;
-     // Error parsing type: v32@0:8^{CommandInsertMasterArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}^{CommandArchive}^{Reference}B}16@24, name: saveToArchive:archiver:
-     // Error parsing type: v32@0:8r^{CommandInsertMasterArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<TSP::Reference>=^{Arena}ii^{Rep}}^{CommandArchive}^{Reference}B}16@24, name: loadFromArchive:unarchiver:
- (void)loadFromUnarchiver:(id)arg1;
- (id)makeInverseInducedCommandsFromInducedCommands:(id)arg1;
- (void)readAfterInducedCommandsHaveBeenCommitted:(id)arg1;
- (id)makeInducedCommandsAfterInducedCommands:(id)arg1;
- (BOOL)requiresTransactionalInducedCommands;
- (id)makeInverse;
- (void)rollback;
- (BOOL)supportsCollaboration;
- (void)undo;
- (void)redo;
- (void)commit;
- (BOOL)process;
- (id)actionString;
- (void)setMasterWasInsertedWithDrop:(BOOL)arg1;
@property(readonly, nonatomic) BOOL masterWasInsertedWithDrop;
- (id)theme;
- (id)initForInverseOfRemoveWithContext:(id)arg1;
- (id)initWithMasterSlideNode:(id)arg1 theme:(id)arg2 slideNodeToInsertAfter:(id)arg3;
- (id)initWithMasterSlideNode:(id)arg1 theme:(id)arg2 atIndex:(unsigned long long)arg3 styleMapper:(id)arg4;
@property(retain) KNSlideNode *replacementMasterSlideNodeForUndo;
@property BOOL setsInsertedSlideAsDefaultMasterSlide;
@property(retain) NSArray *undoMasterChangeCommands;
- (void)populateGSSPCmdThemeInsertMasterSlideNode:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

// Remaining properties
@property(readonly, nonatomic) KNDocumentRoot *documentRoot; // @dynamic documentRoot;

@end

