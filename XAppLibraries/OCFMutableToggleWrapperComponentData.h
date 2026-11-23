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
