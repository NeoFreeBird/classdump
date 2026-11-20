//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADAdRenderResult_h
#define GADAdRenderResult_h
@import Foundation;

#include "GADAdConfigurationRenderStatistics.h"
#include "GADAdRenderingMetadata.h"

@class NSArray, NSObject, NSString;

@interface GADAdRenderResult : NSObject

@property (retain, nonatomic) NSArray *ads;
@property (retain, nonatomic) NSArray *errors;
@property (nonatomic) _Bool finished;
@property (retain, nonatomic) GADAdRenderingMetadata *metadata;
@property (retain, nonatomic) NSArray *fillURLStrings;
@property (retain, nonatomic) GADAdConfigurationRenderStatistics *renderStatistics;
@property (retain, nonatomic) NSString *rendererClassString;
@property (readonly, nonatomic) long long exitStatus;

/* instance methods */

@end

#endif /* GADAdRenderResult_h */
