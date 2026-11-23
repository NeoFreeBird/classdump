//
#ifndef NSProcessInfo_TFSAdditions_h
#define NSProcessInfo_TFSAdditions_h
@import Foundation;

@interface NSProcessInfo (TFSAdditions)

/* instance methods */
- (unsigned long long)tfs_threadCount;
- (unsigned long long)tfs_virtualMemory;
- (unsigned long long)tfs_residentMemory;
- (unsigned long long)tfs_residentMemoryHighWatermark;
- (void)tfs_getVirtualMemory:(unsigned long long *)memory residentMemory:(unsigned long long *)memory residentMemoryHighWatermark:(unsigned long long *)watermark;
- (unsigned long long)tfs_physicalFootprint;
- (unsigned long long)tfs_availableMemory;
- (unsigned long long)tfs_freePhysicalMemory;
- (id)tfs_buildNumberString;
- (struct { long long x0; long long x1; long long x2; })tfs_iOSVersion;
- (id)tfs_iOSVersionString;

@end

#endif /* NSProcessInfo_TFSAdditions_h */
