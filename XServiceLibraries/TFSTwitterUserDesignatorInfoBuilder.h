//
#ifndef TFSTwitterUserDesignatorInfoBuilder_h
#define TFSTwitterUserDesignatorInfoBuilder_h
@import Foundation;

@class NSObject;

@interface TFSTwitterUserDesignatorInfoBuilder : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 richTextBuilder;
}

/* instance methods */
- (id)parseWithJson:(id)json error:(id *)error;
- (id)init;

@end

#endif /* TFSTwitterUserDesignatorInfoBuilder_h */
