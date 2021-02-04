/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libwebrtc.dylib/libwebrtc.dylib-Structs.h>
@class NSData, NSNumber;

@interface WK_RTCEncodedImage : NSObject {

	unsigned char _flags;
	BOOL _completeFrame;
	int _encodedWidth;
	int _encodedHeight;
	unsigned _timeStamp;
	int _spatialIndex;
	NSData* _buffer;
	long long _captureTimeMs;
	long long _ntpTimeMs;
	long long _encodeStartMs;
	long long _encodeFinishMs;
	unsigned long long _frameType;
	long long _rotation;
	NSNumber* _qp;
	unsigned long long _contentType;

}

@property (nonatomic,retain) NSData * buffer;                             //@synthesize buffer=_buffer - In the implementation block
@property (assign,nonatomic) int encodedWidth;                            //@synthesize encodedWidth=_encodedWidth - In the implementation block
@property (assign,nonatomic) int encodedHeight;                           //@synthesize encodedHeight=_encodedHeight - In the implementation block
@property (assign,nonatomic) unsigned timeStamp;                          //@synthesize timeStamp=_timeStamp - In the implementation block
@property (assign,nonatomic) long long captureTimeMs;                     //@synthesize captureTimeMs=_captureTimeMs - In the implementation block
@property (assign,nonatomic) long long ntpTimeMs;                         //@synthesize ntpTimeMs=_ntpTimeMs - In the implementation block
@property (assign,nonatomic) unsigned char flags;                         //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) long long encodeStartMs;                     //@synthesize encodeStartMs=_encodeStartMs - In the implementation block
@property (assign,nonatomic) long long encodeFinishMs;                    //@synthesize encodeFinishMs=_encodeFinishMs - In the implementation block
@property (assign,nonatomic) unsigned long long frameType;                //@synthesize frameType=_frameType - In the implementation block
@property (assign,nonatomic) long long rotation;                          //@synthesize rotation=_rotation - In the implementation block
@property (assign,nonatomic) BOOL completeFrame;                          //@synthesize completeFrame=_completeFrame - In the implementation block
@property (nonatomic,retain) NSNumber * qp;                               //@synthesize qp=_qp - In the implementation block
@property (assign,nonatomic) unsigned long long contentType;              //@synthesize contentType=_contentType - In the implementation block
@property (assign,nonatomic) int spatialIndex;                            //@synthesize spatialIndex=_spatialIndex - In the implementation block
-(void)setFrameType:(unsigned long long)arg1 ;
-(unsigned long long)frameType;
-(NSData *)buffer;
-(unsigned char)flags;
-(id)initWithNativeEncodedImage:(EncodedImage)arg1 ;
-(EncodedImage)nativeEncodedImage;
-(void)setEncodedWidth:(int)arg1 ;
-(void)setEncodedHeight:(int)arg1 ;
-(void)setCaptureTimeMs:(long long)arg1 ;
-(void)setNtpTimeMs:(long long)arg1 ;
-(void)setEncodeStartMs:(long long)arg1 ;
-(void)setEncodeFinishMs:(long long)arg1 ;
-(void)setCompleteFrame:(BOOL)arg1 ;
-(void)setQp:(NSNumber *)arg1 ;
-(int)encodedWidth;
-(int)encodedHeight;
-(long long)captureTimeMs;
-(long long)ntpTimeMs;
-(long long)encodeStartMs;
-(long long)encodeFinishMs;
-(BOOL)completeFrame;
-(NSNumber *)qp;
-(int)spatialIndex;
-(void)setSpatialIndex:(int)arg1 ;
-(void)setBuffer:(NSData *)arg1 ;
-(void)setFlags:(unsigned char)arg1 ;
-(unsigned long long)contentType;
-(void)setContentType:(unsigned long long)arg1 ;
-(unsigned)timeStamp;
-(void)setTimeStamp:(unsigned)arg1 ;
-(long long)rotation;
-(void)setRotation:(long long)arg1 ;
@end
