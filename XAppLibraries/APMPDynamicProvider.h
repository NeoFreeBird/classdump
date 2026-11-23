//
#ifndef APMPDynamicProvider_h
#define APMPDynamicProvider_h
@import Foundation;

@class NSMutableDictionary, NSObject;

@interface APMPDynamicProvider : NSObject {
    /* instance variables */
    NSMutableDictionary *_creators;
}

/* instance methods */
- (id)init;
- (void)setModuleCreator:(id /* block */)creator forName:(id)name;
- (id)moduleForName:(id)name error:(id *)error;

@end

#endif /* APMPDynamicProvider_h */
