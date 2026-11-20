//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12TwitterLists14CreateListForm_h
#define _TtC12TwitterLists14CreateListForm_h
@import Foundation;

@class NSArray, Swift.Bool, TFNLegacyForm, TwitterLists.CreateListForm.State, TwitterLists.CreateListFormDelegate ?, _$sSo14TFNBooleanItemC, _$sSo15TFNDataViewItemCSg, _$sSo18TFNLegacyFormFieldC, _$sSo23ListCopyStringsProvider_p, _$sSo23TFNLegacyFormCustomItemC;

@interface TwitterLists.CreateListForm : TFNLegacyForm { // (Swift)
    /* instance variables */
    TwitterLists.CreateListFormDelegate ? actionDelegate;
    Swift.Bool isPrivateHasChanges;
    Swift.Bool bannerImageHasChanges;
    __C.TFNLegacyFormField nameField;
    __C.TFNLegacyFormField descriptionField;
    __C.TFNLegacyFormCustomItem editMembersItem;
    __C.TFNBooleanItem isPrivateItem;
    __C.TFNLegacyFormCustomItem deleteItem;
    TwitterLists.CreateListForm.State state;
    __C.ListCopyStringsProvider stringsProvider;
    __C.TFNDataViewItem? $__lazy_storage_$_isPrivateDataViewItem;
}

@property (nonatomic, readonly) _Bool submittable;
@property (nonatomic, readonly) _Bool hasChanges;
@property (nonatomic, readonly) NSArray *sections;

/* instance methods */
- (_Bool)isSubmittable;
- (void)didTapDeleteWithSender:(id)sender;
- (void)didTapEditMembersWithSender:(id)sender;
- (void)didTapIsPrivateWithSender:(id)sender;
- (id)init;

@end

#endif /* _TtC12TwitterLists14CreateListForm_h */
