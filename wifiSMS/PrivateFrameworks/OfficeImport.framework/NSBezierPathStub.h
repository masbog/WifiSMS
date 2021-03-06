/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */



@interface NSBezierPathStub : NSObject <NSCopying>
{
    NSInteger _segmentCount;
    NSInteger _segmentMax;
    struct PATHSEGMENT { unsigned char x1; struct CGPoint { 
            float x; 
            float y; 
        } x2; } *_head;
    NSInteger _lastSubpathIndex;
    NSInteger _elementCount;
    float _lineWidth;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _controlPointBounds;
    float _miterLimit;
    float _flatness;
    float *_dashedLinePattern;
    NSUInteger _dashedLineCount;
    float _dashedLinePhase;
    void *_path;
    id _private[4];
    struct $_157 { 
        unsigned int _flags : 8; 
        unsigned int _pathState : 2; 
        unsigned int _unused : 22; 
    } _bpFlags;
}

+ (void)initialize;
+ (void)setCurrentCGContext:(struct CGContext { }*)arg1;
+ (struct CGContext { }*)currentCGContext;
+ (id)bezierPath;
+ (id)bezierPathWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (id)bezierPathWithOvalInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (id)bezierPathWithRoundedRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 xRadius:(float)arg2 yRadius:(float)arg3;
+ (void)fillRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (void)strokeRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (void)clipRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (void)strokeLineFromPoint:(struct CGPoint { float x1; float x2; })arg1 toPoint:(struct CGPoint { float x1; float x2; })arg2;
+ (void)drawPackedGlyphs:(const char *)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
+ (void)setDefaultMiterLimit:(float)arg1;
+ (float)defaultMiterLimit;
+ (void)setDefaultFlatness:(float)arg1;
+ (float)defaultFlatness;
+ (void)setDefaultWindingRule:(NSUInteger)arg1;
+ (NSUInteger)defaultWindingRule;
+ (void)setDefaultLineCapStyle:(NSUInteger)arg1;
+ (NSUInteger)defaultLineCapStyle;
+ (void)setDefaultLineJoinStyle:(NSUInteger)arg1;
+ (NSUInteger)defaultLineJoinStyle;
+ (void)setDefaultLineWidth:(float)arg1;
+ (float)defaultLineWidth;
+ (void)drawString:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2 withFontName:(id)arg3 andHeight:(float)arg4 color:(id)arg5 alignToTop:(BOOL)arg6 currentTransformStruct:(struct { float x1; float x2; float x3; float x4; float x5; float x6; })arg7;
+ (void)setMiterLimit:(float)arg1;
+ (float)miterLimit;
+ (void)setFlatness:(float)arg1;
+ (float)flatness;
+ (void)setWindingRule:(NSUInteger)arg1;
+ (NSUInteger)windingRule;
+ (void)setLineCapStyle:(NSUInteger)arg1;
+ (NSUInteger)lineCapStyle;
+ (void)setLineJoinStyle:(NSUInteger)arg1;
+ (NSUInteger)lineJoinStyle;
+ (void)setLineWidth:(float)arg1;
+ (float)lineWidth;

- (id)init;
- (void)dealloc;
- (void)finalize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)moveToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)lineToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)curveToPoint:(struct CGPoint { float x1; float x2; })arg1 controlPoint1:(struct CGPoint { float x1; float x2; })arg2 controlPoint2:(struct CGPoint { float x1; float x2; })arg3;
- (void)closePath;
- (void)removeAllPoints;
- (void)relativeMoveToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)relativeLineToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)relativeCurveToPoint:(struct CGPoint { float x1; float x2; })arg1 controlPoint1:(struct CGPoint { float x1; float x2; })arg2 controlPoint2:(struct CGPoint { float x1; float x2; })arg3;
- (float)lineWidth;
- (void)setLineWidth:(float)arg1;
- (NSUInteger)lineCapStyle;
- (void)setLineCapStyle:(NSUInteger)arg1;
- (NSUInteger)lineJoinStyle;
- (void)setLineJoinStyle:(NSUInteger)arg1;
- (NSUInteger)windingRule;
- (void)setWindingRule:(NSUInteger)arg1;
- (float)miterLimit;
- (void)setMiterLimit:(float)arg1;
- (float)flatness;
- (void)setFlatness:(float)arg1;
- (void)setLineDash:(const float*)arg1 count:(NSInteger)arg2 phase:(float)arg3;
- (void)getLineDash:(float*)arg1 count:(NSInteger*)arg2 phase:(float*)arg3;
- (void)_doPath;
- (void)stroke;
- (void)fill;
- (void)addClip;
- (void)setClip;
- (void)subdivideBezierWithFlatness:(float)arg1 startPoint:(struct CGPoint { float x1; float x2; })arg2 controlPoint1:(struct CGPoint { float x1; float x2; })arg3 controlPoint2:(struct CGPoint { float x1; float x2; })arg4 endPoint:(struct CGPoint { float x1; float x2; })arg5;
- (void)flattenIntoPath:(id)arg1;
- (id)bezierPathByFlatteningPath;
- (id)_copyFlattenedPath;
- (id)bezierPathByReversingPath;
- (void)transformUsingAffineTransform:(id)arg1;
- (BOOL)isEmpty;
- (struct CGPoint { float x1; float x2; })currentPoint;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })controlPointBounds;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (NSInteger)elementCount;
- (NSUInteger)elementAtIndex:(NSInteger)arg1;
- (NSInteger)_segmentIndexForElementIndex:(NSInteger)arg1;
- (NSUInteger)elementAtIndex:(NSInteger)arg1 associatedPoints:(struct CGPoint { float x1; float x2; }*)arg2;
- (void)setAssociatedPoints:(struct CGPoint { float x1; float x2; }*)arg1 atIndex:(NSInteger)arg2;
- (void)appendBezierPath:(id)arg1;
- (void)appendBezierPathWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)appendBezierPathWithPoints:(struct CGPoint { float x1; float x2; }*)arg1 count:(NSInteger)arg2;
- (void)appendBezierPathWithOvalInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_appendArcSegmentWithCenter:(struct CGPoint { float x1; float x2; })arg1 radius:(double)arg2 angle1:(double)arg3 angle2:(double)arg4;
- (void)appendBezierPathWithArcWithCenter:(struct CGPoint { float x1; float x2; })arg1 radius:(float)arg2 startAngle:(float)arg3 endAngle:(float)arg4 clockwise:(BOOL)arg5;
- (void)appendBezierPathWithArcWithCenter:(struct CGPoint { float x1; float x2; })arg1 radius:(float)arg2 startAngle:(float)arg3 endAngle:(float)arg4;
- (void)appendBezierPathWithArcFromPoint:(struct CGPoint { float x1; float x2; })arg1 toPoint:(struct CGPoint { float x1; float x2; })arg2 radius:(float)arg3;
- (void)appendBezierPathWithRoundedRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 xRadius:(float)arg2 yRadius:(float)arg3;
- (NSInteger)_locationOfPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)containsPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)isHitByPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)isHitByRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isHitByPath:(id)arg1;
- (BOOL)isStrokeHitByPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)isStrokeHitByRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isStrokeHitByPath:(id)arg1;
- (BOOL)cachesBezierPath;
- (void)setCachesBezierPath:(BOOL)arg1;
- (id)description;
- (void)_addPathSegment:(NSInteger)arg1 point:(struct CGPoint { float x1; float x2; })arg2;
- (void)_deviceMoveToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_deviceLineToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_deviceCurveToPoint:(struct CGPoint { float x1; float x2; })arg1 controlPoint1:(struct CGPoint { float x1; float x2; })arg2 controlPoint2:(struct CGPoint { float x1; float x2; })arg3;
- (void)_deviceClosePath;
- (void)_doUserPathWithOp:(unsigned char)arg1 inContext:(struct CGContext { }*)arg2;
- (void)appendBezierPathWithArcWithRect:(struct CGPoint { float x1; float x2; })arg1 rightBottom:(struct CGPoint { float x1; float x2; })arg2 start:(struct CGPoint { float x1; float x2; })arg3 end:(struct CGPoint { float x1; float x2; })arg4 clockwise:(BOOL)arg5;
- (void)appendBezierPathWithArcWithCenter:(struct CGPoint { float x1; float x2; })arg1 radiusSize:(struct CGSize { float x1; float x2; })arg2 startAngle:(float)arg3 endAngle:(float)arg4 clockwise:(BOOL)arg5;
- (id)getGlyphs:(id)arg1 :(id)arg2 :(NSUInteger*)arg3;
- (void)appendBezierPathWithString:(id)arg1 attributes:(id)arg2;
- (void)appendBezierPathWithString:(id)arg1 attributes:(id)arg2 spacing:(NSInteger*)arg3 spacingCount:(NSInteger)arg4;
- (BOOL)equalToCurrentPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)attachBezierPath:(id)arg1;
- (void)appendBezierPathWithArcWithCenter:(struct CGPoint { float x1; float x2; })arg1 radiusX:(float)arg2 radiusY:(float)arg3 startAngle:(float)arg4 endAngle:(float)arg5 clockwise:(BOOL)arg6;
- (BOOL)isSquare;
- (BOOL)containsClosedSubpaths;
- (NSInteger)numberOfClosedSubpaths;
- (id)closedSubpaths;
- (BOOL)isSingleLineSegment;

@end
