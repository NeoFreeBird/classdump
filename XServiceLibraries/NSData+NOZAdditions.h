//
#ifndef NSData_NOZAdditions_h
#define NSData_NOZAdditions_h
@import Foundation;

@interface NSData (NOZAdditions)

/* instance methods */
- (id)noz_dataByCompressing:(id)compressing compressionLevel:(float)level;
- (id)noz_dataByDecompressing:(id)decompressing;

@end

#endif /* NSData_NOZAdditions_h */
