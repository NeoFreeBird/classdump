//
#ifndef FIRCLSProcessReportOperation_h
#define FIRCLSProcessReportOperation_h
@import Foundation;

#include "FIRCLSInternalReport.h"
#include "FIRCLSSymbolResolver.h"

@class NSOperation;

@interface FIRCLSProcessReportOperation : NSOperation

@property (readonly, nonatomic) FIRCLSSymbolResolver *symbolResolver;
@property (readonly, nonatomic) FIRCLSInternalReport *report;

/* instance methods */
- (id)initWithReport:(id)report resolver:(id)resolver;
- (id)binaryImagePath;
- (id)threadArrayFromFile:(id)file;
- (_Bool)symbolicateFile:(id)file withResolver:(id)resolver;
- (void)main;

@end

#endif /* FIRCLSProcessReportOperation_h */
