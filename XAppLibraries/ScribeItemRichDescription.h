//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ScribeItemRichDescription_h
#define ScribeItemRichDescription_h
@import Foundation;

@class NSObject, TFSOrderedMutableDictionary;

@interface ScribeItemRichDescription : NSObject {
    /* instance variables */
    TFSOrderedMutableDictionary *_dictionary;
}

/* instance methods */
- (id)init;
- (void)addValueIfNotNil:(id)nil forKey:(id)key;
- (id)stringValue;

@end

#endif /* ScribeItemRichDescription_h */
