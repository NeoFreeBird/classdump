//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterEditControl_h
#define TFSTwitterEditControl_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "TFSTwitterEditControlEdit.h"
#include "TFSTwitterEditControlInitial.h"

@class NSObject, NSString;

@interface TFSTwitterEditControl : NSObject <NSCoding, NSCopying> { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 wrapped;
}

@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) TFSTwitterEditControlEdit *edit;
@property (nonatomic, readonly) TFSTwitterEditControlInitial *initial;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(void *)zone;
- (_Bool)isEqual:(id)equal;
- (id)initWithEditedTweets:(id)tweets;
- (id)initWithInitialTweet:(id)tweet;
- (id)init;

@end

#endif /* TFSTwitterEditControl_h */
