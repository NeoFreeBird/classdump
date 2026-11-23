//
#ifndef TFSTwitterTypeaheadResultContext_h
#define TFSTwitterTypeaheadResultContext_h
@import Foundation;

@class NSObject, NSString;

@interface TFSTwitterTypeaheadResultContext : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 contextTypes;
}

@property (nonatomic, readonly) NSString *displayString;
@property (nonatomic, readonly) NSString *iconUrl;
@property (nonatomic, readonly) long long displayType;
@property (nonatomic, readonly) NSString *description;

/* instance methods */
- (id)initWithDisplayString:(id)string;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFSTwitterTypeaheadResultContext_h */
