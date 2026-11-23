//
#ifndef TFNTwitterCompositionPersistenceManager_h
#define TFNTwitterCompositionPersistenceManager_h
@import Foundation;

#include "TAPTwitterCompositionAccountPerspective-Protocol.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSMutableOrderedSet, NSObject, NSOrderedSet;

@interface TFNTwitterCompositionPersistenceManager : NSObject

@property (readonly, nonatomic) NSMutableOrderedSet *draftsSet;
@property (readonly, nonatomic) NSMutableOrderedSet *undoableSet;
@property (readonly, nonatomic) NSMutableOrderedSet *outboxSet;
@property (readonly, nonatomic) NSMutableDictionary *editableDictionary;
@property (readonly, weak, nonatomic) id <TAPTwitterCompositionAccountPerspective> account;
@property (readonly, copy, nonatomic) NSOrderedSet *draftCompositions;
@property (readonly, copy, nonatomic) NSOrderedSet *normalDraftCompositions;
@property (readonly, copy, nonatomic) NSOrderedSet *allNormalDraftCompositions;
@property (readonly, copy, nonatomic) NSOrderedSet *allEditingDraftCompositions;
@property (readonly, copy, nonatomic) NSOrderedSet *undoableCompositions;
@property (readonly, copy, nonatomic) NSArray *allExpiredUndoableCompositions;
@property (readonly, copy, nonatomic) NSArray *allValidUndoableCompositions;
@property (readonly, copy, nonatomic) NSOrderedSet *outboxCompositions;
@property (readonly, nonatomic) NSDictionary *editableCompositions;

/* instance methods */
- (id)init;
- (id)initWithAccount:(id)account;
- (id)_filterDraftCompositions:(id)compositions withType:(long long)type;
- (id)_filterUndoableCompositions:(id)compositions isExpired:(_Bool)expired;
- (void)addDraftComposition:(id)composition draftType:(long long)type;
- (void)removeDraftComposition:(id)composition;
- (void)removeAllDraftCompositions;
- (void)saveDraftComposition:(id)composition;
- (void)moveDraftComposition:(id)composition toAccount:(id)account;
- (id)draftCompositionForUniqueID:(id)id;
- (id)autoSavedDraftCompositionForReplyToStatusID:(long long)id;
- (void)moveDraftCompositionToOutbox:(id)outbox;
- (id)undoableCompositionForUniqueID:(id)id;
- (void)moveOutboxCompositionToUndoable:(id)undoable;
- (void)moveUndoableCompositionToOutbox:(id)outbox;
- (void)moveDraftCompositionToUndoable:(id)undoable;
- (void)moveUndoableCompositionToDrafts:(id)drafts;
- (void)moveOutboxCompositionToDrafts:(id)drafts;
- (void)moveEditableCompositionToDrafts:(id)drafts;
- (void)removeOutboxComposition:(id)composition;
- (void)removeAllOutboxCompositions;
- (void)saveOutboxComposition:(id)composition;
- (id)outboxCompositionForUniqueID:(id)id;
- (void)addUndoableComposition:(id)composition;
- (void)removeUndoableComposition:(id)composition;
- (void)addEditableComposition:(id)composition;
- (_Bool)containsEditableCompositionWithStatusID:(id)id;
- (id)editableCompositionCopyWithStatusID:(id)id;
- (void)removeEditableCompositionWithStatusID:(id)id;
- (void)removeEditableComposition:(id)composition;
- (void)removeAllUndoableCompositions;
- (void)removeAllEditableCompositions;
- (void)removeExpiredEditableCompositions;
- (void)removeAllStoredCompositions;
- (id)_savedCompositionUniqueIDsForType:(unsigned long long)type;
- (void)_loadDraftCompositions;
- (void)_loadUndoableCompositions;
- (void)_loadEditableCompositions;
- (void)_loadOutboxCompositions;
- (id)_loadCompositionWithUniqueID:(id)id type:(unsigned long long)type;
- (void)_assignReplyChains;
- (void)_addCompositionToDraftsSet:(id)set;
- (void)_removeCompositionFromDraftsSet:(id)set;
- (void)_addCompositionToUndoableSet:(id)set;
- (void)_removeCompositionFromUndoableSet:(id)set;
- (void)_addCompositionToOutboxSet:(id)set;
- (void)_removeCompositionFromOutboxSet:(id)set;
- (void)_addCompositionToEditableDictionary:(id)dictionary;
- (void)_removeCompositionFromEditableDictionary:(id)dictionary;
- (id)_compositionInfoFileForComposition:(id)composition type:(unsigned long long)type;
- (void)_saveRegionCodesForComposition:(id)composition nextToFile:(id)file;
- (void)_archiveComposition:(id)composition toFile:(id)file;
- (void)_saveCompositionFileToDrafts:(id)drafts;
- (void)_saveCompositionFileToUndoable:(id)undoable;
- (void)_saveCompositionFileToOutbox:(id)outbox;
- (void)_saveCompositionFileToEditable:(id)editable;
- (void)_deleteDraftCompositionDirectory:(id)directory;
- (void)_deleteUndoableCompositionDirectory:(id)directory;
- (void)_deleteOutboxCompositionDirectory:(id)directory;
- (void)_deleteEditableCompositionDirectory:(id)directory;
- (void)_deleteCompositionDirectoryByUniqueID:(id)id type:(unsigned long long)type;
- (void)_ensureDirectoriesExist;
- (void)_ensureDirectoryForDraft:(id)draft;
- (void)_ensureDirectoryForUndoable:(id)undoable;
- (void)_ensureDirectoryForEditable:(id)editable;
- (id)_draftsDirectoryPath;
- (id)_draftsDirectoryForCompositionUniqueID:(id)id;
- (id)_draftsDirectoryForComposition:(id)composition;
- (id)_undoableDirectoryPath;
- (id)_undoableDirectoryForCompositionUniqueID:(id)id;
- (id)_undoableDirectoryForComposition:(id)composition;
- (id)_outboxDirectoryPath;
- (id)_outboxDirectoryForCompositionUniqueID:(id)id;
- (id)_outboxDirectoryForComposition:(id)composition;
- (id)_editableDirectoryPath;
- (id)_editableDirectoryForCompositionUniqueID:(id)id;
- (id)_editableDirectoryForComposition:(id)composition;

@end

#endif /* TFNTwitterCompositionPersistenceManager_h */
