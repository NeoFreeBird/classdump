//
#ifndef TASTitleValue_h
#define TASTitleValue_h
@import Foundation;

@class NSObject, NSString;

@interface TASTitleValue : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 value;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *localizedDescriptiveTitle;
@property (nonatomic, readonly) NSString *navigationBarTitle;
@property (nonatomic, readonly) _Bool isTitleEditViewHidden;
@property (nonatomic, readonly) _Bool isTitleEditViewEditable;
@property (nonatomic, readonly) NSString *titleEditViewText;

/* instance methods */
- (id)initWithSettingsTitle:(id)title connectionState:(long long)state isLoggedInUserCreator:(_Bool)creator isLoggedInUserAdmin:(_Bool)admin creatorUserDisplayFullName:(id)name;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TASTitleValue_h */
