//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFMutableToggleWrapperComponentData_h
#define OCFMutableToggleWrapperComponentData_h
@import Foundation;

#include "OCFRichText.h"
#include "OCFToggleWrapperComponentContent.h"
#include "OCFToggleWrapperComponentData.h"

@interface OCFMutableToggleWrapperComponentData : OCFToggleWrapperComponentData

@property (nonatomic) long long style;
@property (retain, nonatomic) OCFRichText *titleText;
@property (retain, nonatomic) OCFToggleWrapperComponentContent *onContent;
@property (retain, nonatomic) OCFToggleWrapperComponentContent *offContent;
@property (nonatomic) _Bool state;

@end

#endif /* OCFMutableToggleWrapperComponentData_h */
