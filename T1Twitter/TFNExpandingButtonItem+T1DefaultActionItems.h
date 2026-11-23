//
#ifndef TFNExpandingButtonItem_T1DefaultActionItems_h
#define TFNExpandingButtonItem_T1DefaultActionItems_h
@import Foundation;

@interface TFNExpandingButtonItem (T1DefaultActionItems)

/* class methods */
+ (id)newDefaultButtonItemForCategory:(unsigned long long)category composerPresenter:(id)presenter featureSwitches:(id)switches scribe:(id)scribe scribeContext:(id)context account:(id)account;
+ (id)_t1_newComposeButtonItemForComposerPresenter:(id)presenter featureSwitches:(id)switches scribe:(id)scribe scribeContext:(id)context;
+ (id)_t1_newDraftsButtonItemForComposerPresenter:(id)presenter scribe:(id)scribe scribeContext:(id)context;
+ (id)_t1_newGIFSearchComposerButtonItemForComposerPresenter:(id)presenter scribe:(id)scribe scribeContext:(id)context;
+ (id)_t1_newSpaceCreationButtonItemForComposerPresenter:(id)presenter scribe:(id)scribe scribeContext:(id)context account:(id)account;
+ (void)_t1_setButtonItem:(id)item tapAction:(id /* block */)action longPressAction:(id /* block */)action withScribe:(id)scribe element:(id)element context:(id)context;

@end

#endif /* TFNExpandingButtonItem_T1DefaultActionItems_h */
