//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TASEmojisModel_h
#define TASEmojisModel_h
@import Foundation;

#include "TASSpacesContext-Protocol.h"

@class NSArray, NSObject, NSString;

@interface TASEmojisModel : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 emojiPreferencesDefaultsKeyPrefix;
    @40@0:8:16@24@32 observers;
}

@property (nonatomic, retain) id <TASSpacesContext> context;
@property (nonatomic, readonly) NSString *defaultEmoji;
@property (nonatomic, readonly) NSArray *allPublicEmojis;
@property (nonatomic, readonly) NSArray *allPrivateEmojis;
@property (nonatomic, readonly) NSString *raisedHandEmoji;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (id)preferredVariantForEmoji:(id)emoji;
- (id)scribeElementForEmoji:(id)emoji;
- (id)variantsForEmoji:(id)emoji;
- (void)updatePreferredVariant:(id)variant forEmoji:(id)emoji;
- (id)imageForEmoji:(id)emoji size:(struct CGSize { double x0; double x1; })size;
- (void)addEmojisModelObserver:(id)observer;
- (void)removeEmojisModelObserver:(id)observer;

@end

#endif /* TASEmojisModel_h */
