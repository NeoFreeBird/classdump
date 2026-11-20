//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSFeatureSwitchesManifest_h
#define TFSFeatureSwitchesManifest_h
@import Foundation;

#include "TFSFeatureSwitchesConfig.h"

@class NSArray, NSDate, NSDictionary, NSObject, NSSet;

@interface TFSFeatureSwitchesManifest : NSObject {
    /* instance variables */
    NSDictionary *_embeddedExperiments;
    NSSet *_requiresRestart;
    NSSet *_experimentNamesSupportingAccessibility;
}

@property (readonly, nonatomic) TFSFeatureSwitchesConfig *defaultConfig;
@property (readonly, nonatomic) NSArray *facets;
@property (readonly, nonatomic) NSDate *createdOn;

/* class methods */
+ (id)manifestWithDictionary:(id)dictionary createdOn:(id)on;
+ (id)manifestWithContentsOfFile:(id)file error:(id *)error;

/* instance methods */
- (id)initWithDefaultConfig:(id)config embeddedExperiments:(id)experiments requiresRestart:(id)restart facets:(id)facets createdOn:(id)on experimentNamesSupportingAccessibility:(id)accessibility;
- (id)embeddedExperimentKeys;
- (_Bool)requiresRestartForKeys:(id)keys;
- (id)requiresRestartKeys;
- (id)embeddedExperimentForKey:(id)key;
- (_Bool)hasAccessibilitySupportForKey:(id)key;

@end

#endif /* TFSFeatureSwitchesManifest_h */
