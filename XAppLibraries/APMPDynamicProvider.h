//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
