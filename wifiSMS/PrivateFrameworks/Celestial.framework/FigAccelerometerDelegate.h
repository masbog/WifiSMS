/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class SBSAccelerometer;



@interface FigAccelerometerDelegate : NSObject <SBSAccelerometerDelegate>
{
    SBSAccelerometer *sbsaccel;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } ringMutex;
    NSInteger ringIndex;
    float ringX[64];
    float ringY[64];
    float ringZ[64];
    double ringTime[64];
}


- (void)deferOnRunloop_accelerometerEventsEnable;
- (id)init;
- (void)dealloc;
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(NSInteger)arg6;
- (void)getVector:(float*)arg1 :(float*)arg2 :(float*)arg3 forTimeStamp:(double)arg4;

@end
