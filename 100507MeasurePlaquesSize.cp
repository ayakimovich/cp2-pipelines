CellProfiler Pipeline: http://www.cellprofiler.org
Version:1
SVNRevision:9777

LoadImages:[module_num:1|svn_version:\'9777\'|variable_revision_number:5|show_window:False|notes:\x5B\x5D]
    File type to be loaded:individual images
    File selection method:Text-Regular expressions
    Number of images in each group?:3
    Type the text that the excluded images have in common:Do not use
    Analyze all subfolders within the selected folder?:No
    Input image file location:Default Input Folder\x7CNone
    Check image sets for missing or duplicate files?:Yes
    Group images by metadata?:No
    Exclude certain files?:No
    Specify metadata fields to group by:
    Text that these images have in common (case-sensitive):12.*C04.*w2.TIF
    Name this loaded image:GFP
    Position of this image in each group:2
    Extract metadata from where?:None
    Regular expression that finds metadata in the file name:^(?P<Plate>.*)_(?P<Well>\x5BA-P\x5D\x5B0-9\x5D{2})_s(?P<Site>\x5B0-9\x5D)
    Type the regular expression that finds metadata in the subfolder path:.*\x5B\\\\/\x5D(?P<Date>.*)\x5B\\\\/\x5D(?P<Run>.*)$

IdentifyPrimaryObjects:[module_num:2|svn_version:\'9487\'|variable_revision_number:6|show_window:False|notes:\x5B\x5D]
    Select the input image:GFP
    Name the primary objects to be identified:Plaques
    Typical diameter of objects, in pixel units (Min,Max):100,1500
    Discard objects outside the diameter range?:Yes
    Try to merge too small objects with nearby larger objects?:Yes
    Discard objects touching the border of the image?:No
    Select the thresholding method:Manual
    Threshold correction factor:0.9
    Lower and upper bounds on threshold:0.000000,1.000000
    Approximate fraction of image covered by objects?:0.01
    Method to distinguish clumped objects:Laplacian of Gaussian
    Method to draw dividing lines between clumped objects:None
    Size of smoothing filter:10
    Suppress local maxima that are closer than this minimum allowed distance:7
    Speed up by using lower-resolution image to find local maxima?:Yes
    Name the outline image:PrimaryOutlines
    Fill holes in identified objects?:Yes
    Automatically calculate size of smoothing filter?:Yes
    Automatically calculate minimum allowed distance between local maxima?:Yes
    Manual threshold:0.0015
    Select binary image:None
    Retain outlines of the identified objects?:No
    Automatically calculate the threshold using the Otsu method?:Yes
    Enter Laplacian of Gaussian threshold:0.5
    Two-class or three-class thresholding?:Two classes
    Minimize the weighted variance or the entropy?:Weighted variance
    Assign pixels in the middle intensity class to the foreground or the background?:Foreground
    Automatically calculate the size of objects for the Laplacian of Gaussian filter?:Yes
    Enter LoG filter diameter:5
    Handling of objects if excessive number of objects identified:Continue
    Maximum number of objects:500

MeasureObjectSizeShape:[module_num:3|svn_version:\'1\'|variable_revision_number:1|show_window:False|notes:\x5B\x5D]
    Select objects to measure:Plaques
    Calculate the Zernike features?:Yes

ExportToSpreadsheet:[module_num:4|svn_version:\'9660\'|variable_revision_number:6|show_window:False|notes:\x5B\x5D]
    Select or enter the column delimiter:Tab
    Prepend the output file name to the data file names?:Yes
    Add image metadata columns to your object data file?:No
    Limit output to a size that is allowed in Excel?:Yes
    Select the columns of measurements to export?:Yes
    Calculate the per-image mean values for object measurements?:No
    Calculate the per-image median values for object measurements?:No
    Calculate the per-image standard deviation values for object measurements?:No
    Output file location:Default Output Folder\x7CNone
    Export all measurements?:Yes
    Press button to select measurements to export:Plaques\x7CAreaShape_Perimeter,Plaques\x7CAreaShape_FormFactor,Plaques\x7CAreaShape_Orientation,Plaques\x7CAreaShape_Area,Plaques\x7CAreaShape_Solidity,Plaques\x7CAreaShape_Zernike_1_1,Plaques\x7CAreaShape_Zernike_0_0,Plaques\x7CAreaShape_Zernike_3_1,Plaques\x7CAreaShape_Zernike_3_3,Plaques\x7CAreaShape_Zernike_2_0,Plaques\x7CAreaShape_Zernike_2_2,Plaques\x7CAreaShape_Zernike_5_1,Plaques\x7CAreaShape_Zernike_5_3,Plaques\x7CAreaShape_Zernike_5_5,Plaques\x7CAreaShape_Zernike_4_0,Plaques\x7CAreaShape_Zernike_4_2,Plaques\x7CAreaShape_Zernike_4_4,Plaques\x7CAreaShape_Zernike_7_1,Plaques\x7CAreaShape_Zernike_7_3,Plaques\x7CAreaShape_Zernike_7_5,Plaques\x7CAreaShape_Zernike_7_7,Plaques\x7CAreaShape_Zernike_6_0,Plaques\x7CAreaShape_Zernike_6_2,Plaques\x7CAreaShape_Zernike_6_4,Plaques\x7CAreaShape_Zernike_6_6,Plaques\x7CAreaShape_Zernike_9_1,Plaques\x7CAreaShape_Zernike_9_3,Plaques\x7CAreaShape_Zernike_9_5,Plaques\x7CAreaShape_Zernike_9_7,Plaques\x7CAreaShape_Zernike_9_9,Plaques\x7CAreaShape_Zernike_8_0,Plaques\x7CAreaShape_Zernike_8_2,Plaques\x7CAreaShape_Zernike_8_4,Plaques\x7CAreaShape_Zernike_8_6,Plaques\x7CAreaShape_Zernike_8_8,Plaques\x7CAreaShape_EulerNumber,Plaques\x7CAreaShape_Extent,Plaques\x7CAreaShape_Eccentricity,Plaques\x7CAreaShape_MinorAxisLength,Plaques\x7CAreaShape_MajorAxisLength,Plaques\x7CLocation_Center_X,Plaques\x7CLocation_Center_Y,Plaques\x7CNumber_Object_Number
    Data to export:Do not use
    Combine these object measurements with those of the previous object?:No
    File name:DATA.csv
    Use the object name for the file name?:Yes
