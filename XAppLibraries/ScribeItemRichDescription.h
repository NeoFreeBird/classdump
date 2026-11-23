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
