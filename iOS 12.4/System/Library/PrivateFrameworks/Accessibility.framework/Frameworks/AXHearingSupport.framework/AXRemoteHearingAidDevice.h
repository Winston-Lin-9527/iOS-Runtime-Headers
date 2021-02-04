/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:56 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXHearingSupport/AXHADeviceProtocol.h>

@protocol AXHARemoteUpdateProtocol;
@class NSString, NSMutableArray, NSDate, NSArray, AXHearingAidMode;

@interface AXRemoteHearingAidDevice : NSObject <AXHADeviceProtocol> {

	BOOL _delayWritePending;
	BOOL _keepInSync;
	char _leftTreble;
	char _rightTreble;
	char _leftBass;
	char _rightBass;
	BOOL _isBluetoothPaired;
	BOOL _isPaired;
	BOOL _isConnecting;
	BOOL _leftConnected;
	BOOL _rightConnected;
	BOOL _supportsBinauralStreaming;
	BOOL _supportsCombinedPresets;
	BOOL _supportsCombinedVolumes;
	short _leftMicrophoneVolumeSteps;
	short _rightMicrophoneVolumeSteps;
	short _leftStreamVolumeSteps;
	short _rightStreamVolumeSteps;
	short _leftSensitivitySteps;
	short _rightSensitivitySteps;
	short _leftMixedVolumeSteps;
	short _rightMixedVolumeSteps;
	int availableEars;
	double _rightMicrophoneVolume;
	double _leftMicrophoneVolume;
	double _rightStreamVolume;
	double _leftStreamVolume;
	double _leftSensitivity;
	double _rightSensitivity;
	double _leftMixedVolume;
	double _rightMixedVolume;
	id<AXHARemoteUpdateProtocol> _updateDelegate;
	NSString* _name;
	NSMutableArray* _manufacturer;
	NSMutableArray* _model;
	NSString* _leftFirmwareVersion;
	NSString* _rightFirmwareVersion;
	NSString* _leftHardwareVersion;
	NSString* _rightHardwareVersion;
	NSString* _rightUUID;
	NSString* _leftUUID;
	NSString* _leftPeripheralUUID;
	NSString* _rightPeripheralUUID;
	double _rightBatteryLevel;
	double _leftBatteryLevel;
	NSDate* _leftBatteryLowDate;
	NSDate* _rightBatteryLowDate;
	NSArray* _rightPrograms;
	NSArray* _leftPrograms;
	AXHearingAidMode* _leftSelectedProgram;
	AXHearingAidMode* _rightSelectedProgram;
	AXHearingAidMode* _leftSelectedStreamingProgram;
	AXHearingAidMode* _rightSelectedStreamingProgram;
	NSString* _deviceUUID;
	unsigned long long _loadedProperties;
	unsigned long long _pendingPropertyWrites;
	unsigned long long _leftAvailableProperties;
	unsigned long long _rightAvailableProperties;

}

@property (assign,nonatomic) BOOL isPaired;                                                   //@synthesize isPaired=_isPaired - In the implementation block
@property (assign,nonatomic) BOOL isConnecting;                                               //@synthesize isConnecting=_isConnecting - In the implementation block
@property (assign,nonatomic) BOOL leftConnected;                                              //@synthesize leftConnected=_leftConnected - In the implementation block
@property (assign,nonatomic) BOOL rightConnected;                                             //@synthesize rightConnected=_rightConnected - In the implementation block
@property (nonatomic,retain) NSString * name;                                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSMutableArray * manufacturer;                                   //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,retain) NSMutableArray * model;                                          //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) NSString * leftFirmwareVersion;                                  //@synthesize leftFirmwareVersion=_leftFirmwareVersion - In the implementation block
@property (nonatomic,retain) NSString * rightFirmwareVersion;                                 //@synthesize rightFirmwareVersion=_rightFirmwareVersion - In the implementation block
@property (nonatomic,retain) NSString * leftHardwareVersion;                                  //@synthesize leftHardwareVersion=_leftHardwareVersion - In the implementation block
@property (nonatomic,retain) NSString * rightHardwareVersion;                                 //@synthesize rightHardwareVersion=_rightHardwareVersion - In the implementation block
@property (nonatomic,retain) NSString * rightUUID;                                            //@synthesize rightUUID=_rightUUID - In the implementation block
@property (nonatomic,retain) NSString * leftUUID;                                             //@synthesize leftUUID=_leftUUID - In the implementation block
@property (nonatomic,retain) NSString * leftPeripheralUUID;                                   //@synthesize leftPeripheralUUID=_leftPeripheralUUID - In the implementation block
@property (nonatomic,retain) NSString * rightPeripheralUUID;                                  //@synthesize rightPeripheralUUID=_rightPeripheralUUID - In the implementation block
@property (assign,nonatomic) double rightBatteryLevel;                                        //@synthesize rightBatteryLevel=_rightBatteryLevel - In the implementation block
@property (assign,nonatomic) double leftBatteryLevel;                                         //@synthesize leftBatteryLevel=_leftBatteryLevel - In the implementation block
@property (nonatomic,retain) NSDate * leftBatteryLowDate;                                     //@synthesize leftBatteryLowDate=_leftBatteryLowDate - In the implementation block
@property (nonatomic,retain) NSDate * rightBatteryLowDate;                                    //@synthesize rightBatteryLowDate=_rightBatteryLowDate - In the implementation block
@property (assign,nonatomic) short leftMicrophoneVolumeSteps;                                 //@synthesize leftMicrophoneVolumeSteps=_leftMicrophoneVolumeSteps - In the implementation block
@property (assign,nonatomic) short rightMicrophoneVolumeSteps;                                //@synthesize rightMicrophoneVolumeSteps=_rightMicrophoneVolumeSteps - In the implementation block
@property (assign,nonatomic) short leftStreamVolumeSteps;                                     //@synthesize leftStreamVolumeSteps=_leftStreamVolumeSteps - In the implementation block
@property (assign,nonatomic) short rightStreamVolumeSteps;                                    //@synthesize rightStreamVolumeSteps=_rightStreamVolumeSteps - In the implementation block
@property (assign,nonatomic) short leftSensitivitySteps;                                      //@synthesize leftSensitivitySteps=_leftSensitivitySteps - In the implementation block
@property (assign,nonatomic) short rightSensitivitySteps;                                     //@synthesize rightSensitivitySteps=_rightSensitivitySteps - In the implementation block
@property (assign,nonatomic) short leftMixedVolumeSteps;                                      //@synthesize leftMixedVolumeSteps=_leftMixedVolumeSteps - In the implementation block
@property (assign,nonatomic) short rightMixedVolumeSteps;                                     //@synthesize rightMixedVolumeSteps=_rightMixedVolumeSteps - In the implementation block
@property (assign,nonatomic) BOOL supportsBinauralStreaming;                                  //@synthesize supportsBinauralStreaming=_supportsBinauralStreaming - In the implementation block
@property (assign,nonatomic) BOOL supportsCombinedPresets;                                    //@synthesize supportsCombinedPresets=_supportsCombinedPresets - In the implementation block
@property (assign,nonatomic) BOOL supportsCombinedVolumes;                                    //@synthesize supportsCombinedVolumes=_supportsCombinedVolumes - In the implementation block
@property (nonatomic,copy) NSArray * rightPrograms;                                           //@synthesize rightPrograms=_rightPrograms - In the implementation block
@property (nonatomic,copy) NSArray * leftPrograms;                                            //@synthesize leftPrograms=_leftPrograms - In the implementation block
@property (nonatomic,retain) AXHearingAidMode * leftSelectedProgram;                          //@synthesize leftSelectedProgram=_leftSelectedProgram - In the implementation block
@property (nonatomic,retain) AXHearingAidMode * rightSelectedProgram;                         //@synthesize rightSelectedProgram=_rightSelectedProgram - In the implementation block
@property (nonatomic,retain) AXHearingAidMode * leftSelectedStreamingProgram;                 //@synthesize leftSelectedStreamingProgram=_leftSelectedStreamingProgram - In the implementation block
@property (nonatomic,retain) AXHearingAidMode * rightSelectedStreamingProgram;                //@synthesize rightSelectedStreamingProgram=_rightSelectedStreamingProgram - In the implementation block
@property (nonatomic,retain) NSString * deviceUUID;                                           //@synthesize deviceUUID=_deviceUUID - In the implementation block
@property (assign,nonatomic) unsigned long long loadedProperties;                             //@synthesize loadedProperties=_loadedProperties - In the implementation block
@property (assign,nonatomic) unsigned long long pendingPropertyWrites;                        //@synthesize pendingPropertyWrites=_pendingPropertyWrites - In the implementation block
@property (assign,nonatomic) unsigned long long leftAvailableProperties;                      //@synthesize leftAvailableProperties=_leftAvailableProperties - In the implementation block
@property (assign,nonatomic) unsigned long long rightAvailableProperties;                     //@synthesize rightAvailableProperties=_rightAvailableProperties - In the implementation block
@property (assign,nonatomic) BOOL isBluetoothPaired;                                          //@synthesize isBluetoothPaired=_isBluetoothPaired - In the implementation block
@property (assign,nonatomic,__weak) id<AXHARemoteUpdateProtocol> updateDelegate;              //@synthesize updateDelegate=_updateDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL keepInSync;                                                 //@synthesize keepInSync=_keepInSync - In the implementation block
@property (assign,nonatomic) int availableEars; 
@property (assign,nonatomic) double rightMicrophoneVolume;                                    //@synthesize rightMicrophoneVolume=_rightMicrophoneVolume - In the implementation block
@property (assign,nonatomic) double leftMicrophoneVolume;                                     //@synthesize leftMicrophoneVolume=_leftMicrophoneVolume - In the implementation block
@property (assign,nonatomic) double rightStreamVolume;                                        //@synthesize rightStreamVolume=_rightStreamVolume - In the implementation block
@property (assign,nonatomic) double leftStreamVolume;                                         //@synthesize leftStreamVolume=_leftStreamVolume - In the implementation block
@property (assign,nonatomic) double rightSensitivity;                                         //@synthesize rightSensitivity=_rightSensitivity - In the implementation block
@property (assign,nonatomic) double leftSensitivity;                                          //@synthesize leftSensitivity=_leftSensitivity - In the implementation block
@property (assign,nonatomic) double rightMixedVolume;                                         //@synthesize rightMixedVolume=_rightMixedVolume - In the implementation block
@property (assign,nonatomic) double leftMixedVolume;                                          //@synthesize leftMixedVolume=_leftMixedVolume - In the implementation block
@property (assign,nonatomic) char rightTreble;                                                //@synthesize rightTreble=_rightTreble - In the implementation block
@property (assign,nonatomic) char leftTreble;                                                 //@synthesize leftTreble=_leftTreble - In the implementation block
@property (assign,nonatomic) char rightBass;                                                  //@synthesize rightBass=_rightBass - In the implementation block
@property (assign,nonatomic) char leftBass;                                                   //@synthesize leftBass=_leftBass - In the implementation block
-(BOOL)hasConnection;
-(double)leftBatteryLevel;
-(double)rightBatteryLevel;
-(void)setManufacturer:(NSMutableArray *)arg1 ;
-(NSMutableArray *)manufacturer;
-(BOOL)isConnected;
-(void)setIsPaired:(BOOL)arg1 ;
-(id<AXHARemoteUpdateProtocol>)updateDelegate;
-(void)setUpdateDelegate:(id<AXHARemoteUpdateProtocol>)arg1 ;
-(void)setModel:(NSMutableArray *)arg1 ;
-(BOOL)isConnecting;
-(int)availableEars;
-(BOOL)leftAvailable;
-(BOOL)rightAvailable;
-(AXHearingAidMode *)leftSelectedProgram;
-(AXHearingAidMode *)rightSelectedProgram;
-(id)selectedPrograms;
-(AXHearingAidMode *)leftSelectedStreamingProgram;
-(AXHearingAidMode *)rightSelectedStreamingProgram;
-(NSArray *)leftPrograms;
-(NSArray *)rightPrograms;
-(id)combinedPrograms;
-(void)selectProgram:(id)arg1 forEar:(int)arg2 ;
-(void)setLeftPrograms:(NSArray *)arg1 ;
-(void)setRightPrograms:(NSArray *)arg1 ;
-(void)setAvailableEars:(int)arg1 ;
-(void)setLeftPeripheralUUID:(NSString *)arg1 ;
-(void)setLeftUUID:(NSString *)arg1 ;
-(void)setRightUUID:(NSString *)arg1 ;
-(void)setRightPeripheralUUID:(NSString *)arg1 ;
-(NSString *)leftUUID;
-(NSString *)rightUUID;
-(void)setLeftFirmwareVersion:(NSString *)arg1 ;
-(void)setRightFirmwareVersion:(NSString *)arg1 ;
-(void)setLeftHardwareVersion:(NSString *)arg1 ;
-(void)setRightHardwareVersion:(NSString *)arg1 ;
-(void)setLeftSelectedProgram:(AXHearingAidMode *)arg1 ;
-(void)setRightSelectedProgram:(AXHearingAidMode *)arg1 ;
-(void)setLeftSelectedStreamingProgram:(AXHearingAidMode *)arg1 ;
-(void)setRightSelectedStreamingProgram:(AXHearingAidMode *)arg1 ;
-(void)setLeftBatteryLowDate:(NSDate *)arg1 ;
-(void)setRightBatteryLowDate:(NSDate *)arg1 ;
-(BOOL)leftConnected;
-(BOOL)rightConnected;
-(unsigned long long)loadedProperties;
-(BOOL)didLoadProperty:(unsigned long long)arg1 ;
-(unsigned long long)leftAvailableProperties;
-(unsigned long long)rightAvailableProperties;
-(unsigned long long)pendingPropertyWrites;
-(void)setPendingPropertyWrites:(unsigned long long)arg1 ;
-(void)_delayWriteProperties;
-(void)writeVolumesForProperty:(unsigned long long)arg1 ;
-(short)leftMixedVolumeSteps;
-(short)rightMixedVolumeSteps;
-(short)leftMicrophoneVolumeSteps;
-(short)rightMicrophoneVolumeSteps;
-(short)leftStreamVolumeSteps;
-(short)rightStreamVolumeSteps;
-(short)leftSensitivitySteps;
-(short)rightSensitivitySteps;
-(BOOL)supportsCombinedVolumes;
-(BOOL)isLeftConnected;
-(BOOL)isRightConnected;
-(BOOL)supportsCombinedVolumesForProperty:(unsigned long long)arg1 ;
-(BOOL)supportsCombinedPresets;
-(BOOL)programsListsAreEqual;
-(id)programs;
-(BOOL)propertyIsAvailable:(unsigned long long)arg1 forEar:(int)arg2 ;
-(BOOL)showCombinedPrograms;
-(void)_updateSelectedProgramsProperties;
-(void)_writeAllProgramSelectionsToPeripheral;
-(BOOL)didLoadRequiredProperties;
-(void)loadRequiredProperties;
-(void)setLeftBatteryLevel:(double)arg1 ;
-(void)setRightBatteryLevel:(double)arg1 ;
-(void)setLoadedProperties:(unsigned long long)arg1 ;
-(void)setLeftConnected:(BOOL)arg1 ;
-(void)setRightConnected:(BOOL)arg1 ;
-(void)setIsBluetoothPaired:(BOOL)arg1 ;
-(void)setLeftSensitivitySteps:(short)arg1 ;
-(void)setRightSensitivitySteps:(short)arg1 ;
-(void)setLeftMicrophoneVolumeSteps:(short)arg1 ;
-(void)setRightMicrophoneVolumeSteps:(short)arg1 ;
-(void)setLeftStreamVolumeSteps:(short)arg1 ;
-(void)setRightStreamVolumeSteps:(short)arg1 ;
-(void)setLeftMixedVolumeSteps:(short)arg1 ;
-(void)setRightMixedVolumeSteps:(short)arg1 ;
-(void)setSupportsCombinedPresets:(BOOL)arg1 ;
-(void)setSupportsCombinedVolumes:(BOOL)arg1 ;
-(void)setSupportsBinauralStreaming:(BOOL)arg1 ;
-(void)setLeftAvailableProperties:(unsigned long long)arg1 ;
-(void)setRightAvailableProperties:(unsigned long long)arg1 ;
-(void)setLeftTreble:(char)arg1 ;
-(void)setRightTreble:(char)arg1 ;
-(void)setLeftBass:(char)arg1 ;
-(void)setRightBass:(char)arg1 ;
-(double)leftMicrophoneVolume;
-(double)rightMicrophoneVolume;
-(double)leftStreamVolume;
-(double)rightStreamVolume;
-(NSString *)leftFirmwareVersion;
-(NSString *)rightFirmwareVersion;
-(NSString *)leftHardwareVersion;
-(NSString *)rightHardwareVersion;
-(NSDate *)leftBatteryLowDate;
-(NSDate *)rightBatteryLowDate;
-(BOOL)isBluetoothPaired;
-(double)leftSensitivity;
-(double)rightSensitivity;
-(double)leftMixedVolume;
-(double)rightMixedVolume;
-(BOOL)supportsBinauralStreaming;
-(id)initWithPersistentRepresentation:(id)arg1 ;
-(void)disconnectAndUnpair:(BOOL)arg1 ;
-(BOOL)containsPeripheralWithUUID:(id)arg1 ;
-(BOOL)didLoadBasicProperties;
-(id)selectedProgramIndexes;
-(BOOL)keepInSync;
-(void)setKeepInSync:(BOOL)arg1 ;
-(NSString *)leftPeripheralUUID;
-(NSString *)rightPeripheralUUID;
-(void)setRightMicrophoneVolume:(double)arg1 ;
-(void)setLeftMicrophoneVolume:(double)arg1 ;
-(void)setRightStreamVolume:(double)arg1 ;
-(void)setLeftStreamVolume:(double)arg1 ;
-(void)setRightSensitivity:(double)arg1 ;
-(void)setLeftSensitivity:(double)arg1 ;
-(void)setRightMixedVolume:(double)arg1 ;
-(void)setLeftMixedVolume:(double)arg1 ;
-(char)rightTreble;
-(char)leftTreble;
-(char)rightBass;
-(char)leftBass;
-(id)initWithRemoteRepresentation:(id)arg1 andDeviceID:(id)arg2 ;
-(id)programAtIndex:(unsigned char)arg1 forEar:(int)arg2 ;
-(BOOL)shouldDisplayCombinedVolume;
-(BOOL)shouldOnlyShowIndividualVolumesForProperty:(unsigned long long)arg1 ;
-(void)setIsConnecting:(BOOL)arg1 ;
-(void)setDeviceUUID:(NSString *)arg1 ;
-(NSString *)deviceUUID;
-(void)setValue:(id)arg1 forProperty:(unsigned long long)arg2 ;
-(BOOL)isPaired;
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)description;
-(id)_valueForProperty:(unsigned long long)arg1 ;
-(void)connect;
-(NSMutableArray *)model;
-(id)valueForProperty:(unsigned long long)arg1 ;
@end
