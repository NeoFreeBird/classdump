//
#ifndef TPMProfileModules_h
#define TPMProfileModules_h
@import Foundation;

@class NSObject;

@interface TPMProfileModules : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 modules;
}

/* instance methods */
- (id)initWithData:(id)data features:(id)features;
- (_Bool)isEquivalentToProfileModules:(id)modules;
- (id)init;

@end

#endif /* TPMProfileModules_h */
