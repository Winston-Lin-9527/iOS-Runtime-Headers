/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:54 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleCV3DMOVKit/AppleCV3DMOVKit-Structs.h>
#import <MOVStreamIO/MOVStreamWriter.h>
#import <libobjc.A.dylib/MOVStreamWriterDelegate.h>

@protocol MOVWriterInterfaceDelegate;
@class NSMutableDictionary, NSString, NSDictionary;

@interface MOVWriterInterface : MOVStreamWriter <MOVStreamWriterDelegate> {

	NSMutableDictionary* _trackAddedByStream;
	NSString* _firstSteamID;
	BOOL _prepared;
	NSMutableDictionary* _frameMetadataDictionary;
	NSMutableDictionary* _metadataAttachmentArrays;
	NSDictionary* _fileSummary;
	BOOL _isReady;
	NSString* _deviceName;
	NSString* _deviceString;
	NSString* _bundleID;
	NSString* _version;
	NSString* _serialNumber;
	NSString* _productType;
	id<MOVWriterInterfaceDelegate> _interface_delegate;
	NSMutableDictionary* _firstFrameContainer;

}

@property (nonatomic,retain) NSMutableDictionary * firstFrameContainer;              //@synthesize firstFrameContainer=_firstFrameContainer - In the implementation block
@property (readonly) BOOL isReady;                                                   //@synthesize isReady=_isReady - In the implementation block
@property (nonatomic,retain) NSString * deviceName;                                  //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,retain) NSString * deviceString;                                //@synthesize deviceString=_deviceString - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                                    //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSString * version;                                     //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSString * serialNumber;                                //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,retain) NSString * productType;                                 //@synthesize productType=_productType - In the implementation block
@property (__weak) id<MOVWriterInterfaceDelegate> interface_delegate;                //@synthesize interface_delegate=_interface_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)makeDeviceString;
+(SCD_Struct_Ti3)cmTimeFromTimestamp:(double)arg1 ;
-(NSString *)version;
-(void)setVersion:(NSString *)arg1 ;
-(BOOL)isReady;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(NSString *)deviceName;
-(NSString *)serialNumber;
-(NSString *)productType;
-(void)setProductType:(NSString *)arg1 ;
-(void)setSerialNumber:(NSString *)arg1 ;
-(id)createFileMetadata;
-(id)initWithFileURL:(id)arg1 expectedFrameRate:(double)arg2 fileSummary:(id)arg3 ;
-(void)setInterface_delegate:(id<MOVWriterInterfaceDelegate>)arg1 ;
-(void)setDeviceString:(NSString *)arg1 ;
-(void)registerMetadataID:(id)arg1 ;
-(void)registerStreamID:(id)arg1 config:(SCD_Struct_MO4*)arg2 ;
-(void)registerAccelerometer;
-(void)registerGyro;
-(void)registerMotion;
-(void)registerLocation;
-(void)processNSCoderObject:(id)arg1 metadataID:(id)arg2 ;
-(void)appendMetadata:(id)arg1 metadataID:(id)arg2 ;
-(BOOL)processPixelBuffer:(CVBufferRef)arg1 withTimeStamp:(SCD_Struct_Ti3)arg2 intrinsics:(SCD_Struct_MO5*)arg3 exposureTime:(double)arg4 streamID:(id)arg5 ;
-(void)finishWriting:(id*)arg1 ;
-(NSString *)deviceString;
-(void)setupMetadata:(id)arg1 ;
-(id)addDefaultSummary;
-(void)clearFirstBufferForStream:(id)arg1 ;
-(NSMutableDictionary *)firstFrameContainer;
-(void)setFirstFrameContainer:(NSMutableDictionary *)arg1 ;
-(id)arrayFrom3x3Matrix:(const SCD_Struct_MO5*)arg1 ;
-(void)setMetadataAttachmentTo:(CVBufferRef)arg1 streamID:(id)arg2 ;
-(void)addFirstBufferForStream:(id)arg1 buffer:(CVBufferRef)arg2 withTimestamp:(SCD_Struct_Ti3)arg3 ;
-(BOOL)receivedAllFramesForStreams:(id)arg1 ;
-(void)intelligentlyAppendBuffersForStreams:(id)arg1 ;
-(void)appendAllMetadataWithTimeStamp:(SCD_Struct_Ti3)arg1 ;
-(void)streamWriterDidFinishPreparing;
-(void)streamWriterDidFailWithError:(id)arg1 ;
-(void)streamWriterDidFinishRecording;
-(void)streamWriterEncounteredAnError:(id)arg1 ;
-(void)registerCVAUserEvent;
-(void)registerCVAFeatureBuffer;
-(void)registerCVAPRDevice;
-(CVBufferRef)getFirstBufferForStream:(id)arg1 withTimestamp:(SCD_Struct_Ti3*)arg2 ;
-(void)addFrameMetadata:(id)arg1 value:(id)arg2 streamID:(id)arg3 ;
-(void)processGyroscopeData:(id)arg1 andAdditionalData:(id)arg2 ;
-(void)processAccelerometerData:(id)arg1 andAdditionalData:(id)arg2 ;
-(void)processDeviceMotionData:(id)arg1 andAdditionalData:(id)arg2 ;
-(void)processCoreLocationData:(id)arg1 timestamp:(double)arg2 andAdditionalData:(id)arg3 ;
-(void)processCVAUserEvent:(id)arg1 ;
-(void)processCVAPRDevice:(id)arg1 ;
-(void)processCVAFeatureBuffer:(id)arg1 ;
-(void)processClass:(id)arg1 andAdditionalData:(id)arg2 metadataID:(id)arg3 ;
-(void)clearAllMetadataBuffers;
-(id<MOVWriterInterfaceDelegate>)interface_delegate;
@end
