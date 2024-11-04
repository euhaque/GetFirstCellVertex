vtkIdType GetFirstCellVertex(){
  
  vtkIdType vertID;
  vtkCell* cell;
  
  cell = poly->GetCell(cellID);
  
  vtkSmartPointer<vtkIdList> cell_vert = vtkSmartPointer<vtkIdList>::New();
  poly->GetCellPoints(cellID, cell_vert);

}

vertID = cell_vert->GetId(0);
poly->GetPoint(vertID,  point_xyz);

return vertID;
