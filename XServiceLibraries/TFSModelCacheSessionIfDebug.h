//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSModelCacheSessionIfDebug_h
#define TFSModelCacheSessionIfDebug_h
@import Foundation;

@class NSObject, NSString;

@interface TFSModelCacheSessionIfDebug : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) id /* block */ debugLogDestination;

/* instance methods */
- (id)initWithIdentifier:(id)identifier debugLogDestination:(id /* block */)destination;
- (void)log:(id)log;
- (void)run:(id /* block */)run;
- (void)debugLog:(id)log;

@end

#endif /* TFSModelCacheSessionIfDebug_h */
