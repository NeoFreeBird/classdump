//
#ifndef T1UnifiedCardItemTableRowAdapter_h
#define T1UnifiedCardItemTableRowAdapter_h
@import Foundation;

@class TFNItemsTableRowAdapter, TFNTwitterAccount, TFSTwitterScribeContext, TUCViewRegistry;

@interface T1UnifiedCardItemTableRowAdapter : TFNItemsTableRowAdapter

@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (readonly, nonatomic) TUCViewRegistry *viewRegistry;
@property (copy, nonatomic) TFSTwitterScribeContext *scribeContext;

/* instance methods */
- (id)init;
- (id)initWithAccount:(id)account viewRegistry:(id)registry scribeContext:(id)context;
- (id)dataViewController:(id)controller objectIdentifierForItem:(id)item withOptions:(id)options;
- (id)dataViewController:(id)controller cellLayoutForItem:(id)item withOptions:(id)options previousLayout:(id)layout atIndexPath:(id)path;
- (id)dataViewController:(id)controller cellLayoutObjectIdentifierForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;

@end

#endif /* T1UnifiedCardItemTableRowAdapter_h */
