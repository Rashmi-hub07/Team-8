<!DOCTYPE html>
<html>
<head>
  <title>Outpass Request</title>
  <link rel="stylesheet" href="style.css">
</head>
<body>
  <img src="download.png" alt="Amity Logo" class="logo">

  <h2>Outpass Request Form</h2>
  <form onsubmit="submitRequest(event)">
    <input type="text" id="name" placeholder="Student Name" required><br>
    <input type="text" id="reason" placeholder="Reason for Outpass" required><br>
    <input type="date" id="date" required><br>
    <button type="submit">Submit Request</button>
  </form>

  <script src="script.js"></script>
</body>

 <head>
        <title>Outpass Request</title>
           <link rel="stylesheet" href="style.css">
 </head>
  <body>
        <img src="download.png" alt="Amity Logo" class="logo">

     <h2>Outpass Request Form</h2>
    
    <form onsubmit="submitRequest(event)">
      <input type="text" id="name" placeholder="Student Name" required><br>
      <input type="text" id="reason" placeholder="Reason for Outpass" required><br>
      <input type="date" id="date" required><br>
      <input type="time" id="time" required><br>
      <button type="submit">Submit Request</button>
    </form>

      <script src="script.js"></script>
  </body>
</html>
